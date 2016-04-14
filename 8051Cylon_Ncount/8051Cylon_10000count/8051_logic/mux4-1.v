`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:46:13 03/31/2016 
// Design Name: 
// Module Name:    mux4-1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module mux4_1(
    input [0:7] i0,
    input [0:7] i1,
    input [0:7] i2,
    input [0:7] i3,
    input [0:1] sel,
    output reg [0:7] dout
    );

always begin
	case (sel)
		2'b00: dout = i0;
		2'b01: dout = i1;
		2'b10: dout = i2;
		2'b11: dout = i3;
	endcase
end

endmodule
