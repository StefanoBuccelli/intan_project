`timescale 1ns / 1ps
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
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

module CUST_ARCH #(
	parameter BOARD_ID 	= 16'h0000,
    parameter BOARD_VERSION 	= 16'h0000,
    parameter HEADER_MAGIC_NUMBER 	= 64'h0
	)
	(
	input wire			clk,
	input wire			reset,
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


   // this is the stupidest module ever... just to check synthesis...

 
    always @(posedge clk) begin
        comp_data_out_valid <= FIFO_write_to;
        comp_data_out       <= FIFO_data_in;
        computing           <= 1'b0;
        trig_stim           <= cfg[15:8];
        pipe_out_data       <= 16'h0042;
        status              <= cfg;
    end



    reg  [2:0]  source_device;      // the spi device that provided the data
    reg  [4:0]  device_output;      // the device channel
    wire [7:0]  source_channel;     // concatenation of the two values above to get a unique identifier

    localparam  state_magic_number_0 =  0,
                state_magic_number_1 =  1,
                state_magic_number_2 =  2,
                state_magic_number_3 =  3,
                state_timestamp_0    =  4,
                state_timestamp_1    =  5,
                state_main_sample    =  6,  // data_stream_en dependant
                state_fscale_sample  =  7,  // data_stream_en dependant
                state_stim_on_off    =  8,  // data_stream_en dependant
                state_stim_pol       =  9,  // data_stream_en dependant
                state_amp_settle     = 10,  // data_stream_en dependant
                state_charge_recov   = 11,  // data_stream_en dependant
                state_DAC            = 12,
                state_ADC            = 13,
                state_TTL_in         = 14,
                state_TTL_out        = 15;











endmodule