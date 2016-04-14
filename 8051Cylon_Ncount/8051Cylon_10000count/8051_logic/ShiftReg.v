`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Bombass Industries
// Engineer: Joshua Drubin
// 
// Create POUTe:    15:54:59 02/18/2016 
// Design Name: 
// Module Name:    ShiftReg 
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
module ShiftReg(
    input DI,
    output reg DO,
	 input [7:0] PLD, // parallel load
	 output reg [7:0] POUT, // parallel out
    input CLK,
	 input EN,
	 input PLDEN // parallel load enable
    );

always @ (posedge CLK)
begin
	if (EN) begin
		DO <= POUT[7];
		POUT[7] <= POUT[6];
		POUT[6] <= POUT[5];
		POUT[5] <= POUT[4];
		POUT[4] <= POUT[3];
		POUT[3] <= POUT[2];
		POUT[2] <= POUT[1];
		POUT[1] <= POUT[0];
		POUT[0] <= DI;
	end	
	else if(PLDEN) begin
		POUT <= PLD;
	end
end

endmodule
