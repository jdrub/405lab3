module test();

	wire clkout;
	reg clk;
	
	CLKDIV clkdiv(
		.CLKIN(clk), 
		.SS(2'b00), 
		.CLKOUT(clkout)
	);

	initial begin
		clk = 0;
	end

	always begin
		#10 clk = ~clk; 
	end

endmodule