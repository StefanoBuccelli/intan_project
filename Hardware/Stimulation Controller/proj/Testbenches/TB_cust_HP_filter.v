`timescale 1ns/1ps

module TB_cust_HP_filter();
 
    reg         clk = 0;
    reg         reset = 0;

    wire [15:0]  data_from_source_to_filter;
    wire [ 2:0]  chan_from_source_to_filter;
    wire        valid_from_source_to_filter;
    wire         read_from_filter_to_source;

    wire [15:0]  data_from_filter;
    wire [ 2:0]  chan_from_filter;
    wire        valid_from_filter;
    wire         read_from_TB_to_source;





    sim_readstream #(
        .FILENAME      ("/home/bornat/Taf/Technique/Git_shared/intan_project/Hardware/Stimulation Controller/proj/Testbenches/squares.bin")
        .CHANNELS      (8),
        .CHANNELS_PW2  (3)
    )
    data_source(
        .clk        (clk),
        .reset      (reset),
        .chan_out_sample  (data_from_source_to_filter),
        .chan_out_num     (chan_from_source_to_filter),
        .chan_out_valid   (valid_from_source_to_filter),
        .chan_out_read    (read_from_filter_to_source)
    );
 
    CUST_HP_filter  #(
        .CHANNELS                   (8),
        .CHANNELS_PW2               (3)
        )
    filter_0
        (
        .clk                        (clk),
        .reset                      (reset),
        
        .chan_in_sample             (data_from_source_to_filter),
        .chan_in_num                (chan_from_source_to_filter),
        .chan_in_valid              (valid_from_source_to_filter),
        .chan_in_read               (read_from_filter_to_source),
        
        .chan_out_sample            (data_from_filter),
        .chan_out_num               (chan_from_filter),
        .chan_out_valid             (valid_from_filter),
        .chan_out_read              (read_from_TB_to_source),

        .coeff                      (16'h8000)
        );

    always #1 clk=~clk;
 

    initial begin
        #4  reset <= 1'b1;
        #4  reset <= 1'b0;
        #10000
        $finish;
    end


    reg [3:0] counter;
    
    always @(posedge clk) begin
        if (reset) counter <= 0;
        else       counter <= counter + 1;
    end
 
    assign read_from_TB_to_source = counter[3] && (counter[2:0] != 3'b100);
 
 
 
endmodule