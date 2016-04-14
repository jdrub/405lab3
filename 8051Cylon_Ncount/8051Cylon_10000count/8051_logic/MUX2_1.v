`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:23:42 03/31/2016 
// Design Name: 
// Module Name:    MUX2_1_busout 
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
module MUX2_1_busout(
	 input sel,
    input [0:1] i1,
    output reg [0:1] dout
    );

always begin
	case (sel) 
		1'b0: dout = 2'b00;
		1'b1: dout = i1;
	endcase
end

endmodule
