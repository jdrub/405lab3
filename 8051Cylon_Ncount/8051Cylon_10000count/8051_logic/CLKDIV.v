////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____ 
//  /   /\/   / 
// /___/  \  /    Vendor: Xilinx 
// \   \   \/     Version : 14.7
//  \   \         Application : 
//  /   /         Filename : xil_3216_55
// /___/   /\     Timestamp : 04/14/2016 14:34:13
// \   \  /  \ 
//  \___\/\___\ 
//
//Command: 
//Design Name: 
//
`timescale 1ns / 1ps

module CLKDIV(CLKIN, 
              SS, 
              CLKOUT);

    input CLKIN;
    input [0:1] SS;
   output CLKOUT;
   
	assign CLKOUT = CLKIN;
   
endmodule
