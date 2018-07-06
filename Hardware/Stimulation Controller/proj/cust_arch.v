//////////////////////////////////////////////////////////////////////////////////
// Company: 		 IMS lab - Univ. Bordeaux - Bordeaux INP
// 
// Design Name: 	 RHD2000 Rhythm USB3 Interface computation complement
// Module Name:    CUST_ARCH 
// Project Name:   Stimulation controller
// Target Devices: 
// Tool versions: 
// Description:    
//
// Dependencies: 
//
// Revision:       0.1 (27 june 2018)
// Additional Comments: The number of channels managed by this module cannot be changed
//                      because it is closely related to the existing hardware it runs
//                      on. Submodules should be configurable in terms of channel number
//
//
//////////////////////////////////////////////////////////////////////////////////

module CUST_ARCH #(
    parameter BOARD_ID              = 16'h0000,
    parameter BOARD_VERSION         = 16'h0000,
    parameter HEADER_MAGIC_NUMBER   = 64'h0
	)
	(
    input wire          clk,
    input wire          reset,
    input wire          FIFO_write_to,
    input wire [15:0]   FIFO_data_in,
    output reg          comp_data_out_valid,
    output reg [15:0]   comp_data_out,
    output reg [ 7:0]   trig_stim,
    output reg          computing,
    input wire [15:0]   pipe_in_data,
    input wire          pipe_in_en,
    output reg [15:0]   pipe_out_data,
    input wire          pipe_out_read,
    input wire [15:0]   cfg,
    input wire [ 7:0]   data_stream_en,
    output reg [15:0]   status
   );



/*
######  ##    ## ###    ### ###    ### ##    ##     ######  ####### ######  ##       #####   ###### ####### ###    ### ####### ###    ## ########
##   ## ##    ## ####  #### ####  ####  ##  ##      ##   ## ##      ##   ## ##      ##   ## ##      ##      ####  #### ##      ####   ##    ##
##   ## ##    ## ## #### ## ## #### ##   ####       ######  #####   ######  ##      ####### ##      #####   ## #### ## #####   ## ##  ##    ##
##   ## ##    ## ##  ##  ## ##  ##  ##    ##        ##   ## ##      ##      ##      ##   ## ##      ##      ##  ##  ## ##      ##  ## ##    ##
######   ######  ##      ## ##      ##    ##        ##   ## ####### ##      ####### ##   ##  ###### ####### ##      ## ####### ##   ####    ##

the next part should be removed at the end of the initial module synthesis
*/


 
    always @(posedge clk) begin
        comp_data_out_valid <= FIFO_write_to;
        comp_data_out       <= FIFO_data_in;
        computing           <= 1'b0;
        //trig_stim           <= cfg[15:8];
        pipe_out_data       <= 16'h0042;
        status              <= cfg;
    end


/*
######  #######  ###### ##       #####  ######   #####  ######## ##  ######  ###    ## #######
##   ## ##      ##      ##      ##   ## ##   ## ##   ##    ##    ## ##    ## ####   ## ##
##   ## #####   ##      ##      ####### ######  #######    ##    ## ##    ## ## ##  ## #######
##   ## ##      ##      ##      ##   ## ##   ## ##   ##    ##    ## ##    ## ##  ## ##      ##
######  #######  ###### ####### ##   ## ##   ## ##   ##    ##    ##  ######  ##   #### #######
*/




    reg  [ 2:0]  source_device;      // the spi device that provided the data
    wire [ 3:0]  inc_source_device;  // the spi device that is expected to provide next data
    reg  [ 4:0]  device_output;      // the device channel
    wire [ 7:0]  source_channel;     // concatenation of the two values above to get a unique identifier
    reg  [ 3:0]  next_source_incr;   // this reg will be added to source_device when required to switch to
                                     // the next device. All 8 devices are not necessarily connected
    reg  [ 7:0]  chan_en_rollmap;    // a map of the next 8 device presence (relative to current device)
    reg  [31:0]  r_timestamp;        // the timestamp of data being received 
    
    integer      main_state;         // this reg will contain the actual state of incoming data


    // the following states for the machine identify the data that is expected on next write
    localparam  //state_idle           =  0,
                state_magic_number_0 =  1,
                state_magic_number_1 =  2,
                state_magic_number_2 =  3,
                state_magic_number_3 =  4,
                state_timestamp_0    =  5,
                state_timestamp_1    =  6,
                state_DC_sample      =  7,  // data_stream_en dependant, only 10 lower bits meaningful
                state_chan_sample    =  8,  // data_stream_en dependant
                state_stim_on_off    =  9,  // data_stream_en dependant
                state_stim_pol       = 10,  // data_stream_en dependant
                state_amp_settle     = 11,  // data_stream_en dependant
                state_charge_recov   = 12,  // data_stream_en dependant
                state_DAC            = 13,
                state_ADC            = 14,
                state_TTL_in         = 15,
                state_TTL_out        = 16;

    reg [ 8:0]  input_write_addr;       // the address at which we will store data
    reg [15:0]  input_write_data;       // the data that will be stored
    reg         input_write_enable;     // the write order
    reg [15:0]  input_storage[0:511];   // this memory is used to store data from the input
    
    


    // computation related registers
    reg  [ 1:0] next_cmd_word_num;
    reg  [15:0] cmd_words[2:0];


    reg [15:0] filter_coeff;



/*
###    ###  #####  ## ###    ##     ####### ####### ###    ###
####  #### ##   ## ## ####   ##     ##      ##      ####  ####
## #### ## ####### ## ## ##  ##     #####   ####### ## #### ##
##  ##  ## ##   ## ## ##  ## ##     ##           ## ##  ##  ##
##      ## ##   ## ## ##   ####     ##      ####### ##      ##


input channel and device counting is also part of the FSM. They are managed just
after main_state
*/




    always @(posedge clk) begin
        if (reset) begin
            main_state <= state_magic_number_0;
        end else begin
            case (main_state)
                state_magic_number_0: begin
                    if (FIFO_write_to) begin
                        // if the next test is wrong, then we did not receive the
                        // expected data, therefore we stay in the same state
                        if (FIFO_data_in == HEADER_MAGIC_NUMBER[15: 0])
                            main_state <= state_magic_number_1;
                    end
                end

                state_magic_number_1: begin
                    if (FIFO_write_to) begin
                        if (FIFO_data_in == HEADER_MAGIC_NUMBER[31:16]) 
                            main_state <= state_magic_number_2;
                        else
                            // here, the received data does not correspond to the expected magic number...
                            // so we should not go further and start again from the beginning
                            main_state <= state_magic_number_0;
                    end
                end

                state_magic_number_2: begin
                    if (FIFO_write_to) begin
                        if (FIFO_data_in == HEADER_MAGIC_NUMBER[47:32])
                            main_state <= state_magic_number_3;
                        else
                            // here, the received data does not correspond to the expected magic number...
                            // so we should not go further and start again from the beginning
                            main_state <= state_magic_number_0;
                    end
                end

                state_magic_number_3: begin
                    if (FIFO_write_to) begin
                        if (FIFO_data_in == HEADER_MAGIC_NUMBER[63:48])
                            main_state <= state_timestamp_0;
                        else
                            // here, the received data does not correspond to the expected magic number...
                            // so we should not go further and start again from the beginning
                            main_state <= state_magic_number_0;
                    end
                end
                
                // so far, we passed the magic number test, so we trust incoming data...

                state_timestamp_0: begin if (FIFO_write_to)                          main_state <= state_timestamp_1;    end
                state_timestamp_1: begin if (FIFO_write_to)                          main_state <= state_DC_sample;      end
                state_DC_sample:   begin if (FIFO_write_to)                          main_state <= state_chan_sample;    end

                state_chan_sample: begin if (FIFO_write_to) begin
                            if (inc_source_device[3] && device_output == 5'd19  )    main_state <= state_stim_on_off;
                            else                                                     main_state <= state_DC_sample;      end
                         end
                
                state_stim_on_off:  begin if (FIFO_write_to && inc_source_device[3]) main_state <= state_stim_pol;       end
                state_stim_pol:     begin if (FIFO_write_to && inc_source_device[3]) main_state <= state_amp_settle;     end
                state_amp_settle:   begin if (FIFO_write_to && inc_source_device[3]) main_state <= state_charge_recov;   end
                state_charge_recov: begin if (FIFO_write_to && inc_source_device[3]) main_state <= state_DAC;            end                
                state_DAC:          begin if (FIFO_write_to)                         main_state <= state_ADC;            end
                state_ADC:          begin if (FIFO_write_to)                         main_state <= state_TTL_in;         end
                state_TTL_in:       begin if (FIFO_write_to)                         main_state <= state_TTL_out;        end
                state_TTL_out:      begin if (FIFO_write_to)                         main_state <= state_magic_number_0; end
                default:            begin                                            main_state <= state_magic_number_0; end
            
            endcase

        end
    end


    // the chan_en_rollmap makes rotations on the data_stream_en value. Therefore, even if we have ne clear
    // view of the actual device number, we know if the next devices are used or not. Doing this, we know
    // how we should increase source_device. This increment is stored in next_source_incr.
    // the operation is performed in advanced because on clock cycle latency is necessary to propagate to
    // the actual increment of source_device. On the late states the value still evolves, but we do not use
    // source_device any more, so it does not matter

    always@(posedge clk) begin
        if (main_state==state_magic_number_3) chan_en_rollmap  <= data_stream_en;
        else if (FIFO_write_to && ((main_state != state_chan_sample && main_state != state_timestamp_1) || (inc_source_device[3] && device_output == 5'd19))) begin
            if (chan_en_rollmap[5:0]==6'b000000) begin
                chan_en_rollmap  <= {7'b1000000, chan_en_rollmap[7]};
            end else if (chan_en_rollmap[4:0]==5'b00000)  begin
                chan_en_rollmap  <= {6'b100000,  chan_en_rollmap[7:6]};
            end else if (chan_en_rollmap[3:0]==4'b0000)   begin
                chan_en_rollmap  <= {5'b10000,   chan_en_rollmap[7:5]};
            end else if (chan_en_rollmap[2:0]==3'b000)    begin
                chan_en_rollmap  <= {4'b1000,    chan_en_rollmap[7:4]};
            end else if (chan_en_rollmap[1:0]==2'b00)     begin
                chan_en_rollmap  <= {3'b100,     chan_en_rollmap[7:3]};
            end else if (chan_en_rollmap[0]  ==1'b0)      begin
                chan_en_rollmap  <= {2'b10,      chan_en_rollmap[7:2]};
            end else begin
                chan_en_rollmap  <= {1'b1,       chan_en_rollmap[7:1]};
            end
        end
    end



    always@(posedge clk) begin
        if (reset) begin
            next_source_incr <= 4'h0;
        end else begin
            case (main_state)
                state_magic_number_0, state_magic_number_1, state_magic_number_2:begin//, state_magic_number_3 : begin
                    next_source_incr <= 4'h0;
                end

                state_DC_sample : begin end
                
                default :
                    if (FIFO_write_to) begin
                        if (chan_en_rollmap[6:0]==7'b0000000) begin
                            next_source_incr <= 4'h8;
                        end else if (chan_en_rollmap[5:0]==6'b000000) begin
                            next_source_incr <= 4'h7;
                        end else if (chan_en_rollmap[4:0]==5'b00000)  begin
                            next_source_incr <= 4'h6;
                        end else if (chan_en_rollmap[3:0]==4'b0000)   begin
                            next_source_incr <= 4'h5;
                        end else if (chan_en_rollmap[2:0]==3'b000)    begin
                            next_source_incr <= 4'h4;
                        end else if (chan_en_rollmap[1:0]==2'b00)     begin
                            next_source_incr <= 4'h3;
                        end else if (chan_en_rollmap[0]  ==1'b0)      begin
                            next_source_incr <= 4'h2;
                        end else begin
                            next_source_incr <= 4'h1;
                        end
                    end
            endcase
        end
    end


    // we identify channels by a concatenation of device input and the source device
    // so : channel 0 is source 0 of device 0
    //      channel 1 is source 0 of device 1
    //      ...
    assign source_channel = {device_output, source_device};

    always @(posedge clk) begin
        if (reset) begin
            source_device <= 3'b111;
            device_output <= 5'b00000;
        end else begin
            if (main_state == state_timestamp_0) begin
                source_device <= 3'b111;
            end else if (main_state ==  state_chan_sample && FIFO_write_to) begin
                source_device <= inc_source_device[2:0];
                if (inc_source_device[3]) begin
                    if (device_output < 5'd19) device_output <= device_output + 1;
                end
            end else if (main_state != state_DC_sample && FIFO_write_to) begin
                source_device <= inc_source_device[2:0];                
            end
        end
    end

    assign inc_source_device = source_device + next_source_incr;



/*
## ###    ## ######  ##    ## ########     ####### ########  ######  ######   #####   ######  #######
## ####   ## ##   ## ##    ##    ##        ##         ##    ##    ## ##   ## ##   ## ##       ##
## ## ##  ## ######  ##    ##    ##        #######    ##    ##    ## ######  ####### ##   ### #####
## ##  ## ## ##      ##    ##    ##             ##    ##    ##    ## ##   ## ##   ## ##    ## ##
## ##   #### ##       ######     ##        #######    ##     ######  ##   ## ##   ##  ######  #######

The next lines will store incoming data to the appropriate areas
*/


    always @(posedge clk) begin
        if (reset) begin
            r_timestamp <= 32'h00000000;
        end else begin
            if (main_state==state_timestamp_0 && FIFO_write_to) begin
                r_timestamp[15: 0] <= FIFO_data_in;
            end
            if (main_state==state_timestamp_1 && FIFO_write_to) begin
                r_timestamp[31:16] <= FIFO_data_in;
            end
        end
    end



    always @(posedge clk) begin
        if (reset) begin
            input_write_data   <= 16'h0000;
            input_write_addr   <=  9'h000;
            input_write_enable <=  1'b0;
        end else begin
            input_write_data   <= FIFO_data_in;
            case (main_state)
                state_DC_sample:    begin   input_write_addr   <= {source_channel, 1'b0};
                                            input_write_enable <= FIFO_write_to;          end
                state_chan_sample:  begin   input_write_addr   <= {source_channel, 1'b1};
                                            input_write_enable <= FIFO_write_to;          end
                state_stim_on_off:  begin   input_write_addr   <= {6'b101000, source_device};   // data stored from addresses 140 to 147
                                            input_write_enable <= FIFO_write_to;          end
                state_stim_pol:     begin   input_write_addr   <= {6'b101001, source_device};   // data stored from addresses 148 to 14F
                                            input_write_enable <= FIFO_write_to;          end
                state_amp_settle:   begin   input_write_addr   <= {6'b101010, source_device};   // data stored from addresses 150 to 157
                                            input_write_enable <= FIFO_write_to;          end
                state_charge_recov: begin   input_write_addr   <= {6'b101011, source_device};   // data stored from addresses 158 to 15F
                                            input_write_enable <= FIFO_write_to;          end
                state_DAC:          begin   input_write_addr   <= 9'b101100000;                 // data stored at 160
                                            input_write_enable <= FIFO_write_to;          end
                state_ADC:          begin   input_write_addr   <= 9'b101100001;                 // data stored at 161
                                            input_write_enable <= FIFO_write_to;          end
                state_TTL_in:       begin   input_write_addr   <= 9'b101100010;                 // data stored at 162
                                            input_write_enable <= FIFO_write_to;          end
                state_TTL_out:      begin   input_write_addr   <= 9'b101100011;                 // data stored at 163
                                            input_write_enable <= FIFO_write_to;          end
                default:            begin   input_write_enable <= 1'b0;                   end
            endcase
        end
    end




    always @(posedge clk) begin
        if (input_write_enable) begin
            input_storage[input_write_addr] <= input_write_data;
        end
    end


/*
 ######  ######  ###    ### ######  ##    ## ########  #####  ######## ##  ######  ###    ##     #######  ######  ##    ## ######   ###### #######
##      ##    ## ####  #### ##   ## ##    ##    ##    ##   ##    ##    ## ##    ## ####   ##     ##      ##    ## ##    ## ##   ## ##      ##
##      ##    ## ## #### ## ######  ##    ##    ##    #######    ##    ## ##    ## ## ##  ##     ####### ##    ## ##    ## ######  ##      #####
##      ##    ## ##  ##  ## ##      ##    ##    ##    ##   ##    ##    ## ##    ## ##  ## ##          ## ##    ## ##    ## ##   ## ##      ##
 ######  ######  ##      ## ##       ######     ##    ##   ##    ##    ##  ######  ##   ####     #######  ######   ######  ##   ##  ###### #######

This is where computation actually starts... as soon as sample data are received and stored,

*/

    reg [ 6:0]  input_read_chan;        // the channel from which we read the data to process in memory
          

    reg [15:0]   data_from_source;      // the data that will be store
    reg  [6:0]   chan_from_source;      // the channel number to be output at the same time as the sample value
    reg         valid_from_source;      // true when data_from_source is output
    wire              read_source;      // tells if new sample is read by next module


    // this state machine is necessary to avoid launching data read twice in the same
    // sample row... (yes, this may happen quite easily if processing is nicely pipelined)
    reg [1:0]   reading_FSM;
    localparam idle            = 0,
               loading_samples = 1,
               reading_samples = 2;
               
    
    always @(posedge clk) begin
        if       (reset)                                  reading_FSM     <= idle;
        else if (main_state == state_timestamp_1)         reading_FSM     <= loading_samples;
        else if (device_output == 5'd16)                  reading_FSM     <= reading_samples;
            // we consider that all meaningful samples are received when device_output is 16
            // because data samples 16 to 19 correspond to extra command transfers
        else if (input_read_chan == 7'h7F && read_source) reading_FSM     <= idle;
            // the sample of the last channel is being read
    end



    always @(posedge clk) begin
        if          (reset || reading_FSM == idle ) begin
            data_from_source    <= 16'h0000;
            chan_from_source    <=  7'h00;
            valid_from_source   <=  1'b0;
            input_read_chan     <=  7'h00;
        end else if ((read_source || !valid_from_source) && reading_FSM == reading_samples) begin
            data_from_source    <= input_storage[{1'b0, input_read_chan, 1'b1}];
            chan_from_source    <= input_read_chan;
            valid_from_source   <=  1'b1;
            input_read_chan     <= input_read_chan + 1;
        end
    end

    
    

/*
 ######  ######  ###    ### ######  ##    ## ########  #####  ######## ##  ######  ###    ##     ###    ###  ######  ######  ##    ## ##      ####### #######
##      ##    ## ####  #### ##   ## ##    ##    ##    ##   ##    ##    ## ##    ## ####   ##     ####  #### ##    ## ##   ## ##    ## ##      ##      ##
##      ##    ## ## #### ## ######  ##    ##    ##    #######    ##    ## ##    ## ## ##  ##     ## #### ## ##    ## ##   ## ##    ## ##      #####   #######
##      ##    ## ##  ##  ## ##      ##    ##    ##    ##   ##    ##    ## ##    ## ##  ## ##     ##  ##  ## ##    ## ##   ## ##    ## ##      ##           ##
 ######  ######  ##      ## ##       ######     ##    ##   ##    ##    ##  ######  ##   ####     ##      ##  ######  ######   ######  ####### ####### #######


 - each data sample goes with the ID of its channel to avoid messing up data
 - flow protocol:
    * each module outputs its data as soon as they are available (data_ready)
    * the data receiver tells if it accepts the data with the data_read I/O.
    * if data in ouptut is not accepted by the receiver module, the emitter
      hold the data and data_ready bit until data is accepted by the receiver
    * data are actually exchanged when both data_ready and read_chan are set.

*/
    
        
    always @(posedge clk) trig_stim = data_from_filter; // this is for debug only

    wire [15:0]   data_from_filter;
    wire  [6:0]   chan_from_filter;
    wire         valid_from_filter;
    wire               read_filter;



    CUST_HP_filter  #(
        .CHANNELS                   (8),
        .CHANNELS_PW2               (3)
        )
    filter_0
        (
        .clk                        (clk),
        .reset                      (reset),
        
        .chan_in_sample             (data_from_source),
        .chan_in_num                (chan_from_source),
        .chan_in_valid              (valid_from_source),
        .chan_in_read               (read_source),
        
        .chan_out_sample            (data_from_filter),
        .chan_out_num               (chan_from_filter),
        .chan_out_valid             (valid_from_filter),
        .chan_out_read              (1'b1),

        .coeff                      (filter_coeff)
        );



/*
######   #####  ######   #####  ###    ### ####### ######## ####### ######      ###    ###  #####  ###    ##  #####   ######  ####### ###    ### ####### ###    ## ########
##   ## ##   ## ##   ## ##   ## ####  #### ##         ##    ##      ##   ##     ####  #### ##   ## ####   ## ##   ## ##       ##      ####  #### ##      ####   ##    ##
######  ####### ######  ####### ## #### ## #####      ##    #####   ######      ## #### ## ####### ## ##  ## ####### ##   ### #####   ## #### ## #####   ## ##  ##    ##
##      ##   ## ##   ## ##   ## ##  ##  ## ##         ##    ##      ##   ##     ##  ##  ## ##   ## ##  ## ## ##   ## ##    ## ##      ##  ##  ## ##      ##  ## ##    ##
##      ##   ## ##   ## ##   ## ##      ## #######    ##    ####### ##   ##     ##      ## ##   ## ##   #### ##   ##  ######  ####### ##      ## ####### ##   ####    ##



command set:

        0x0000 : idle, no command
        0x01-- : single word commands
            0x0100 : (not implemented yet) get architecture version (major)
            0x0101 : (not implemented yet) get architecture version (minor)
            0x0102 : (not implemented yet) read last error

        0x02-- : two words commands
            0x0200 + <coeff>: set filter 1 coefficient

        0x03-- : 



*/

    always @(posedge clk) begin
        if (reset)
            next_cmd_word_num <= 2'b00;
        else if (pipe_in_en) begin
            case(next_cmd_word_num)
                2'b00 : begin
                            if (pipe_in_data[15:8]!=8'h01) begin
                                next_cmd_word_num <= 2'b01;
                                cmd_words[0]      <= pipe_in_data;
                            end
                        end
                2'b01 : begin
                            if (cmd_words[0][15:8]!=8'h02) begin
                                next_cmd_word_num <= 2'b10;
                                cmd_words[1]      <= pipe_in_data;
                            end else begin
                                next_cmd_word_num <= 2'b00;
                            end
                        end
                2'b10 : begin
                            if (cmd_words[0][15:8]!=8'h03) begin
                                next_cmd_word_num <= 2'b11;
                                cmd_words[2]      <= pipe_in_data;
                            end else begin
                                next_cmd_word_num <= 2'b00;
                            end
                        end
                default :       next_cmd_word_num <= 2'b00;                    
            endcase
        end
    end



    always @(posedge clk) begin
        if (reset)
            filter_coeff <= 16'h0000;
        else if (cmd_words[0]==16'h0200 && next_cmd_word_num==2'b01 && pipe_in_en)
            filter_coeff <= pipe_in_data;
    end



endmodule