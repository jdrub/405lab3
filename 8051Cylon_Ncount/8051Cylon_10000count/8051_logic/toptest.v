module test();

	wire clkout;
	reg clk;
	
	

	initial begin
		clk = 0;
	end

	always begin
		#10 clk = ~clk; 
	end
	
	CLKDIV clkdiv(
		.CLKIN(clk), 
		.SS(2'b00), 
		.CLKOUT(clkout)
	);
endmodule
