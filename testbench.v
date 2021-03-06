`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:56:57 12/22/2019
// Design Name:   top_module
// Module Name:   F:/DMA_project/processor_2/testbench.v
// Project Name:  processor
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: top_module
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module testbench;

	// Inputs
	reg [2:0]mode_processor;
	reg [1:0]mode_io;
	reg [1:0]mode_io2;
	reg clk;
  
	// Outputs
	wire [7:0]A;
	wire [7:0]B;
	wire [7:0] C;
	wire [7:0] DB;
	wire [7:0] AB;
	wire [7:0] word_count;
	wire read_io;
	wire read_memory;
	wire Enable_IO2;
	wire Enable_IO1;
	wire Enable_memory;
	wire DREQ1;
	wire DACK1; 
	wire DREQ2;
	wire DACK2;
	wire HACK;
	wire HREQ;
	wire MemToMem;
	wire [7:0]src_reg;
	wire [7:0]dest_reg;
	wire [7:0] cnt_reg;
	wire [7:0]data_reg;
	wire dma;
	wire [7:0]data;
	wire mem_op;
	wire cs;
	wire [7:0]add_reg;
	wire [7:0]address_sent_to_io;
	// Instantiate the Unit Under Test (UUT)
	top_module uut (
		.mode_processor(mode_processor), 
		.mode_io(mode_io), 
		.mode_io2(mode_io2), 
		.clk(clk), 
		.C(C), 
		.DB(DB), 
		.AB(AB), 
		.word_count(word_count), 
		.read_io(read_io), 
		.read_memory(read_memory),
	.Enable_memory(Enable_memory),
	.Enable_IO2(Enable_IO2), 
	.Enable_IO1(Enable_IO1),
	.DACK1(DACK1),
	.DREQ1(DREQ1),
	.DACK2(DACK2),
	.DREQ2(DREQ2),
	.HREQ(HREQ),
	.HACK(HACK),
	.MemToMem(MemToMem),
	.dest_reg(dest_reg),
	.src_reg(src_reg),
	.cnt_reg(cnt_reg),
	.data_reg(data_reg),
	.dma(dma),
	.mem_op(mem_op),
	.data(data),
	.cs(cs),
	.address_sent_to_io(address_sent_to_io),
	.A(A),.B(B)
	);
  
	initial begin
		// Initialize Inputs
		//mode_processor = 0;
		//mode_io = 3;
		//mode_io2 = 3;
		clk = 0;
		mode_processor =3'b111;
		// Wait 100 ns for global reset to finish
		
  /*mem to mem */
     
/*io write io read */

	  /* @(posedge clk)
      mode_io2 = 2'b01;
		repeat(5)@(posedge clk);  //hala 10==>5*//*io read 5*//*io write 
		mode_io2 = 2'b11;*/
		
 		   
		
	  /*processor send task to dma */
	  /*mem read  ---- io write */
     
	  @(posedge clk)
      mode_processor = 3'b110	;
		repeat(4)@(posedge clk);
		mode_processor =3'b111;
       
	 
/* #3 00	 
      mode_processor =3'b001;
      #300
      mode_processor =3'b010;
      #300
      mode_processor =3'b011;
      #300
      mode_processor =3'b100;
      #300
      mode_processor =3'b101;
	   #300
	   mode_processor=3'b110;
		#300
	   mode_processor =3'b111;
		#300 
		mode_io = 2'b00;
		#300
		mode_io = 2'b01;
		#300
		mode_io2 = 2'b00;
		#300
		mode_io2 = 2'b01;
		*/
		
end
always
	begin
		#10
 clk=~clk; 
 end  
		// Add stimulus here

      
endmodule

