`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:00:49 12/21/2019
// Design Name:   memory
// Module Name:   E:/processor/tb_temp.v
// Project Name:  processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: memory
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_temp;

	// Inputs
	reg [7:0] Address;
	reg [7:0] DB;
	reg clk;
	reg MemRead;
	reg Enable;

	// Instantiate the Unit Under Test (UUT)
	memory uut (
		.Address(Address), 
		.DB(DB), 
		.clk(clk), 
		.MemRead(MemRead), 
		.Enable(Enable)
	);

	initial begin
		// Initialize Inputs
		Address = 0;
		DB = 0;
		clk = 0;
		MemRead = 0;
		Enable = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		        repeat(1)@(posedge clk);
		begin
		Enable=1;
		MemRead=0;
		Address=255;
		DB = 5;
		//temp=1;
		
		//DB_io=temp;
		
		end


	end
       always 
		begin
		#10
		clk=~clk;
		end
endmodule

