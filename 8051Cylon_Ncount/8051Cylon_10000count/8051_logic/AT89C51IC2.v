`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Bombass Industries
// Engineer: Joshua Drubin
// 
// Create Date:    15:47:00 02/18/2016 
// Design Name: 
// Module Name:    AT89C51IC2 
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
module AT89C51IC2(
    input MISO,
    output MOSI,
    input [7:0] DI,
    output reg [7:0] DO,
    input CLK,
    output reg SCLK,
    input [1:0] RSEL
    );

reg [7:0] SPDAT;
reg [7:0] SPICON;
reg [7:0] SPSTR;
reg EN;
reg PLDEN;
wire [7:0] shiftRegOut;

initial begin
	
	SCLK <= 0;
	SPDAT <= 0;
	SPICON <= 0;
	SPSTR <= 0;
	EN <= 0;
	PLDEN <= 0;
end



ShiftReg shiftReg(
		.EN(EN),
		.PLD(DI),
		.POUT(shiftRegOut),
		.CLK(CLK),
		.PLDEN(PLDEN)
	);



always @ (posedge CLK)
begin
assign DO = shiftRegOut;

	if(RSEL == 0) begin
		PLDEN <= 1;
	end
	else begin
		PLDEN <= 0;
	end
end


endmodule
