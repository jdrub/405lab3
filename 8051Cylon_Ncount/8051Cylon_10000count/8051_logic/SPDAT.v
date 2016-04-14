`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:10:11 03/31/2016 
// Design Name: 
// Module Name:    SPDAT 
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
module SPIREG_Wrapper(
    input DI,
    input CLK,
    input EN,
    input PLDEN,
    input [0:7] PLD,
	 input [0:1] RSELIN,
    output [0:7] POUT,
    output DO,
    output READY
    );
	 
parameter id = 2'b01;

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
		POUT[0] <= DI;
	end
	else if(PLDEN) begin
		POUT <= PLD;
	end
end

endmodule
