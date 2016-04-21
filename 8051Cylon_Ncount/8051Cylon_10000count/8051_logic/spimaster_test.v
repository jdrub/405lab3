`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:36:09 04/21/2016
// Design Name:   SPIMaster
// Module Name:   H:/ENEE405/405lab3_2/405lab3/8051Cylon_Ncount/8051Cylon_10000count/8051_logic/spimaster_test.v
// Project Name:  my8051
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SPIMaster
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module spimaster_test;

	// Inputs
	reg clk;
	reg rst;
	reg miso;
	reg start;
	reg [0:7] data_in;

	// Outputs
	wire mosi;
	wire sck;
	wire [0:7] data_out;
	wire busy;
	wire new_data;

	// Instantiate the Unit Under Test (UUT)
	SPIMaster uut (
		.clk(clk), 
		.rst(rst), 
		.miso(miso), 
		.start(start), 
		.data_in(data_in), 
		.mosi(mosi), 
		.sck(sck), 
		.data_out(data_out), 
		.busy(busy), 
		.new_data(new_data)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		rst = 0;
		miso = 0;
		start = 1;
		data_in = 8'b10101010;
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	// increment clk
	always begin
		#5 clk = ~clk;
	end
      
endmodule

