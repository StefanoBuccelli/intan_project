//////////////////////////////////////////////////////////////////////////////////
// Company: 		 IIT Istituto Italiano di Tecnologia, Genova, Italy
// 
// Design Name: 	 RHD2000 Rhythm USB3 Interface computation complement
// Module Name:      cust_HP_filter_tb
// Project Name:     Stimulation controller
// Target Devices: 
// Tool versions: 
// Description:      Test bench for cust_HP_filter
//
// Dependencies: 
//
// Revision:       0.1 (17 july 2018)
//
//////////////////////////////////////////////////////////////////////////////////
parameter WIDTH = 10001;
module CUST_HP_filter_tb();
reg clk, reset, chan_in_valid, chan_out_read;
wire chan_in_read, chan_out_valid;
reg [15 : 0] chan_in_sample;
reg [ 6 : 0] chan_in_num;
wire[15 : 0] chan_out_sample;
wire[ 6 : 0] chan_out_num;
reg [15 : 0] coeff;
reg [15:0] data_stored [0:WIDTH-1]; //200001 16-bits words is the length of raw_data.txt
integer i, f;


CUST_HP_filter #(.CHANNELS(1), .CHANNELS_PW2(7)) DUT (
		.clk(clk),
		.reset(reset),
		.chan_in_sample(chan_in_sample),
		.chan_in_num(chan_in_num),
		.chan_in_valid(chan_in_valid),
		.chan_in_read(chan_in_read),
		
		.chan_out_sample(chan_out_sample),
		.chan_out_num(chan_out_num),
		.chan_out_valid(chan_out_valid),
		.chan_out_read(chan_out_read),
		.coeff(coeff)
	);

	// This first block generates the clock and reset signals.
  initial begin
	clk = 1'b0;
	reset =1'b1;
    repeat(4) #10 clk = ~clk;
    reset = 1'b0;
    forever #10 clk = ~clk; // generate a clock
   end
	

initial $readmemb("raw_data_bin_10001.txt", data_stored); // read data from txt in binary format
	
	
	initial begin
	chan_in_sample =16'd0;
	chan_in_num =7'd0;
	chan_in_valid = 1'b0;
	chan_out_read =1'b0;
	coeff =16'd10;	
	i = 0;
	end
	
	initial begin @(negedge reset); // wait for reset
	chan_in_sample =16'd0;
	chan_in_num =7'd0;
	chan_in_valid = 1'b1;
	chan_out_read =1'b0;
	coeff =16'd3991; // (1-exp(-2*pi*300/30000))*65536 coefficient for 300Hz
	i = 0;
	f = $fopen("output_read_0.txt","w");
	
	// 
		repeat(WIDTH) @(posedge clk) begin
			chan_in_sample = data_stored[i];
			$fwrite(f,"%b\n",   chan_out_sample); // write to output_file
			
			$display ("Current value of i is %d", i); // display to console jsut for debugging purposes
			i =i + 1;
		end
		
	chan_in_num = 7'd1;
	chan_in_valid = 1'b1;
	chan_out_read = 1'b0;
	coeff =16'd10;
	# 20
	$fclose(f); // close file
	$finish;		// finish simulation
	end
	
endmodule

	
	
	
	
	
