`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:35:59 12/21/2019
// Design Name:   memory
// Module Name:   E:/processor/mem_tb.v
// Project Name:  processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: memory
//
// Dependencies:
// 
// Revision :
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mem_tb;

	// Inputs
	reg [7:0] Address;
	reg DB_tri;
	reg clk;
	reg MemRead;
	reg Enable;
	//reg [7:0] temp;
	// Outputs
	wire DB_wrReq;

	// Bidirs
	wire [7:0] DB_io;

	// Instantiate the Unit Under Test (UUT)
	memory uut (
		.Address(Address), 
		.DB_tri(DB_tri), 
		.DB_wrReq(DB_wrReq), 
		.DB_io(DB_io), 
		.clk(clk), 
		.MemRead(MemRead), 
		.Enable(Enable)
	);
//assign DB_io=temp; 
	initial begin
		// Initialize Inputs
		Address = 0;
		DB_tri = 0;
		clk = 0;
		MemRead = 0;
		Enable = 0;
	//	temp=0;
 
		// Wait 100 ns for global reset to finish
		#100;
       /* repeat(1)@(negedge clk);
		begin
		Enable=1;
		MemRead=0;
		Address=255;
	//	temp=1;*/
		
		//DB_io=temp;
		
		//end
		
		/*repeat(2)@(negedge clk);
		begin
		Enable=1;
		MemRead=0;
		Address=254;
		//temp=3;
		// Add stimulus here
	end*/
	repeat(1)@(negedge clk);
		begin
		Enable=1;
		MemRead=1;
		Address=255;
	
		
		end 
		// Add stimul us here
	end
      always 
		begin
		#10
		clk=~clk;
		end
		always @ *
		begin
		if (DB_wrReq==1)
		begin DB_tri=1; end 
		end
endmodule

