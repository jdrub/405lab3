_readme_8051hardware&software_development.txt wmh 2015-02-18 : what's important in this set of files

 directory 8051_logic -- contains a Xilinx project which builds an 8051 microprocessor for the Nexys2 board; output 'top.bit'
 directory 8051_code -- contains a Keil project for 8051 control software to implement the Cylon LED-scan on port P1; output 'BLINKY.hex'
 directory tools -- contains
	'BLINKY2BRAM_UCF.bat' -- places data from BLINKY.hex in ROMinit.UCF file used to compile top.bit, e.g. puts the 8051 software into the FPGA.
	'BLINKY2BRAM_bit.bat' -- updates an existing top.bit with a new BLINKY.hex to create 'BLINKYtop.bit' without requiring an FPGA recompile. 
	'ROM4kx8.bmm' -- a structure description file for the FPGA BRAM required by the above .bat utilities (must edit when FPGA BRAM design changes).
	'mingw32make_tools.bat' -- compiles some of the utilities used in the above .bat scripts
	'hex2mem3.c'  -- utility for converting BLINKY.hex into 'BLINKY.mem' required for the other conversions described above. 
	'hex2readmemh01.c' -- utility for converting BLINKY.hex into 'BLINKY.memh', a 'stripped' hex format used by verilog '$readmemh()' (not used here. $readmemh() has been problematic in Xilinx but could be useful in the future for quick-turn behavioral simulation of hardware designs)
	
 Why the above?
  - for initial hardware debug: 
	when we are designing an 8051 system with peripherals, we can write some simple C code to exercise the peripherals in Keil and see it working (or not) both in Xilinx simulation and on the Nexys2 hardware.
  - for our (eventual) software development:
	After the hardware design is frozen we no longer have to go through a lengthy FPGA recompile whenever the software code is changed -- it only takes a few milliseconds for the hardware design's 'top.bit' to have the new ROM code inserted into it by BLINKY2BRAM_bit.bat .  
