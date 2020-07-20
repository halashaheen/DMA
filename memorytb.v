`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:47:12 12/21/2019
// Design Name:   memory
// Module Name:   E:/processor/memorytb.v
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

module memorytb;

	// Inputs
	reg DB_tri;
	reg clk;
	reg MemRead;
	reg Enable;
	reg [7:0] Address;
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

	initial begin
		// Initialize Inputs
		DB_tri = 0;
		clk = 0;
		MemRead = 0;
		Enable = 0;
		//temp=1;
		// Wait 100 ns for global reset to finish
		#100;
       
		repeat(1)@(posedge clk);
		begin
		Enable=1;
		MemRead=1;
		Address=100;
		
		//DB_io=temp;
		
		end
		// Add stimulus here

	end
      always 
		begin
		#10
		clk=~clk;
		end
		 
endmodule

