module mux2_1_busout_test();

	
	reg sel;
	reg [1:0] i1;
	wire [1:0] dout;
	
	

	initial begin
		sel = 0;
		i1 = 2'b11;
	end

	always begin
		#10 sel = ~sel; 
	end
	
	MUX2_1_busout mux2_1_busout(
		.sel(sel), 
		.i1(i1), 
		.dout(dout)
	);
endmodule
