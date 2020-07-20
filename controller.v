`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:42:20 12/21/2019 
// Design Name: 
// Module Name:    controller 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module DB_controller(
    input IO1,
	 input IO2,
	 input processor,
	 input memory,
	 input DMA,
	 output reg IO1_Ctrl,
	 output reg IO2_Ctrl,
	 output  reg proccesor_Ctrl,
	 output reg memory_Ctrl,
	 output reg DMA_Ctrl ) ;
	 always@*
	 begin
	 if(processor == 1 )
	 begin
	   IO1_Ctrl = 0;
	   IO2_Ctrl =0;
	   proccesor_Ctrl = 1;
	   memory_Ctrl =0;
	   DMA_Ctrl = 0;
	 end
	 else if(IO1 ==1)
	 begin
	   IO1_Ctrl = 1;
	   IO2_Ctrl =0;
	   proccesor_Ctrl = 0;
	   memory_Ctrl =0;
	   DMA_Ctrl = 0;
	 end
	 else if (IO2 ==1)
	 begin 
	   IO1_Ctrl = 0;
	   IO2_Ctrl =1;
	   proccesor_Ctrl = 0;
	   memory_Ctrl =0;
	   DMA_Ctrl = 0;
	 end
	 else if(memory ==1)
	 begin 
	   IO1_Ctrl = 0;
	   IO2_Ctrl =0;
	   proccesor_Ctrl = 0;
	   memory_Ctrl =1;
	   DMA_Ctrl = 0;
	 end
	 	 else if(DMA ==1)
	 begin 
	   IO1_Ctrl = 0;
	   IO2_Ctrl =0;
	   proccesor_Ctrl = 0;
	   memory_Ctrl =0;
	   DMA_Ctrl = 1;
	 end
 end
endmodule	 




