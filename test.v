`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:17:08 12/16/2017
// Design Name:   mips
// Module Name:   E:/ise project/P6/vegitabalecpu/piplelineplus/test.v
// Project Name:  piplelineplus
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mips
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test;

	// Inputs
	reg clk;
	reg reset;

	// Instantiate the Unit Under Test (UUT)
	mips uut (
		.clk(clk), 
		.reset(reset)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 1;
		#20
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
 
 	end
   always #10 clk = ~clk;     
endmodule

