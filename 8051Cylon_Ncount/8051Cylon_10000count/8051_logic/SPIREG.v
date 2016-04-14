module SPIREG(
	input CLK,
   input DI,
   input EN,
   input [0:7] PLD,
   input [0:1] RSELIN,
   output DO,
   output wire [0:7] POUT,
   output READY,
	input ID_0,
	input ID_1
	);

reg [0:1] id;
reg [0:7] data;

assign id[0] = ID_0;
assign id[1] = ID_1;

initial begin
	data = 8'b00000000;
end

assign POUT = data;

always @ (posedge CLK) begin

	// load data from pld if rselin is equal to my id
	if (id == RSELIN) begin
		data <= PLD;
	end

end
   
endmodule
