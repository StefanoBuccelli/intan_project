`timescale 1ns / 1 ps

/*
the file format is very basic:
first 16bit word : number of channels in the file.
then, all samples are stored successively...
*/




/*
##   ## #######  #####  ######  ####### ######
##   ## ##      ##   ## ##   ## ##      ##   ##
####### #####   ####### ##   ## #####   ######
##   ## ##      ##   ## ##   ## ##      ##   ##
##   ## ####### ##   ## ######  ####### ##   ##
*/





module sim_readstream#(
	parameter FILENAME 	   = "binfile.bin",
	parameter CHANNELS 	   = 128,
    parameter CHANNELS_PW2 = 7
    
	)
	(
	input  wire                      clk,
	input  wire                      reset,
    
    output reg  [CHANNELS_PW2-1 : 0] chan_out_sample,
    output reg              [15 : 0] chan_out_num,
    output reg                       chan_out_valid,
    input  wire                      chan_out_read
    );
    

/*
######  #######  ###### ##       #####  ######   #####  ######## ##  ######  ###    ## #######
##   ## ##      ##      ##      ##   ## ##   ## ##   ##    ##    ## ##    ## ####   ## ##
##   ## #####   ##      ##      ####### ######  #######    ##    ## ##    ## ## ##  ## #######
##   ## ##      ##      ##      ##   ## ##   ## ##   ##    ##    ## ##    ## ##  ## ##      ##
######  #######  ###### ####### ##   ## ##   ## ##   ##    ##    ##  ######  ##   #### #######
*/



    integer file, r;
    reg           [15:0] channels;            // the number of channels in the file
    reg [CHANNELS_PW2:0] cur_channel;         // the channel actually being output
    reg                  opened      = 1'b0;  // tells if file is open
    reg                  finished    = 1'b0;  // tells if file is finished
    reg                  chan_read   = 1'b0;  // tells if chan number has been read
    
    



/*
###    ###  ######  ######  ##    ## ##      #######     ######  ####### ##   ##  #####  ##    ## ##  ######  ######
####  #### ##    ## ##   ## ##    ## ##      ##          ##   ## ##      ##   ## ##   ## ##    ## ## ##    ## ##   ##
## #### ## ##    ## ##   ## ##    ## ##      #####       ######  #####   ####### ####### ##    ## ## ##    ## ######
##  ##  ## ##    ## ##   ## ##    ## ##      ##          ##   ## ##      ##   ## ##   ##  ##  ##  ## ##    ## ##   ##
##      ##  ######  ######   ######  ####### #######     ######  ####### ##   ## ##   ##   ####   ##  ######  ##   ##
*/



    always @(posedge clk) begin
        if (reset) begin
            //if (opened) r = $fclose(file);
            opened         <= 1'b0;
            chan_out_valid <= 1'b0;
            finished       <= 1'b0;
            chan_read      <= 1'b0;
        end else begin
            if (~opened && ~finished) begin
                $display("opening file");
                file = $fopen(FILENAME, "rb");
                opened         <= 1'b1;
                chan_out_valid <= 1'b0;
                chan_read      <= 1'b0;
                cur_channel    <=    0;
            end else if (opened && ~chan_read) begin
                $display("reading channel number");
                //r = $fread(channels, file);
                channels[ 7:0]  <= $fgetc(file);
                channels[15:8]  <= $fgetc(file);
                chan_out_valid <= 1'b0;
                chan_read      <= 1'b1;
                cur_channel    <=    0;                
            end else if (chan_out_read && ~finished) begin
                if ($feof(file)) begin
                    //r = $fclose(file);
                    opened         <= 1'b0;
                    finished       <= 1'b1;
                    chan_out_valid <= 1'b0;
                end else begin
                    //r = $fread(file, chan_out_sample);
                    chan_out_sample[ 7:0] <= $fgetc(file);
                    chan_out_sample[15:8] <= $fgetc(file);
                    chan_out_num   <= cur_channel;
                    opened         <= 1'b1;
                    if (cur_channel==channels-1) cur_channel <= 0;
                    else                         cur_channel <= cur_channel +1;
                    chan_out_valid <= 1'b1;
                end    
            end            
        end
    end




endmodule