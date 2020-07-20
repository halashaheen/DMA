`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:32:56 12/22/2019 
// Design Name: 
// Module Name:    top_module 
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
module top_module(  input [2:0]mode_processor,
                    input [1:0]mode_io,
						  input [1:0]mode_io2,
						  input clk,
						  output [7:0] C,
						  output [7:0] DB,
						  output  [7:0] AB,
						  output  [7:0] word_count,
						  output  read_io,
						  output  read_memory,
						  output Enable_IO1,
						  output Enable_IO2,
						  output Enable_memory,
						  output DREQ1,
						  output DACK1,
						  output DREQ2,
						  output DACK2,
						  output HACK,
						  output HREQ,
						  output MemToMem,
						  output [7:0]dest_reg,
						  output [7:0]src_reg,
						  output [7:0]cnt_reg,
						  output [7:0]data_reg,
						  output dma,
						  output mem_op,
						  output [7:0] data,
						  output cs,
						  output [7:0]add_reg,
						  output [7:0] address_sent_to_io ,
						  output  [7:0]A,
						  output  [7:0]B
						
						  						 );
wire DB_tri_processor;
wire DB_wrReq_processor;
wire [7:0] DB_io;
wire [7:0] Address_io;
//wire cs;
//wire HACK;
//wire HREQ;
//wire MemToMem;
wire EOP;
wire IORead_io;
wire MemRead_io;
wire [7:0]wordcount_io;
//wire Enable_IO1;
//wire Enable_IO2;
//wire Enable_memory;
wire DB_tri_mem;
wire DB_wrReq_mem;
wire DB_tri_IO1;
wire DB_wreq_IO1;
//wire DREQ1;
//wire DACK1;
wire DB_tri_IO2;
wire DB_wreq_IO2;
wire DREQ2;
wire DACK2;
wire DB_tri_dma;	
wire DB_wrReq_dma; 
assign DB = DB_io;
assign AB = Address_io;
assign read_io = IORead_io;
assign read_memory = MemRead_io;
assign word_count = wordcount_io;

pro processor (DB_tri_processor,DB_wrReq_processor,DB_io,Address_io,cs,clk,HACK,HREQ,mode_processor,MemToMem,EOP,IORead_io,MemRead_io,wordcount_io,C,A,B);
decoder decoder_1(Address_io[7:5],Enable_IO1, Enable_IO2, Enable_memory);
memory mem(Address_io, clk , MemRead_io , Enable_memory,DB_tri_mem,DB_wrReq_mem , DB_io);
iodevice IO1(address_sent_to_io,DB_io, DB_wreq_IO1,DB_tri_IO1,IORead_io,DREQ1,wordcount_io,clk,DACK1,Enable_IO1,Address_io,mode_io);
iodevice_2 IO2(DB_io, DB_wreq_IO2,DB_tri_IO2,IORead_io,DREQ2,wordcount_io,clk,DACK2,Enable_IO2,Address_io,mode_io2);
DB_controller controller( DB_wreq_IO1,DB_wreq_IO2, DB_wrReq_processor, DB_wrReq_mem, DB_wrReq_dma,  DB_tri_IO1,DB_tri_IO2, DB_tri_processor,DB_tri_mem,DB_tri_dma) ;
dma_module dma_oppa(add_reg,data,mem_op,dma,data_reg,cnt_reg,src_reg,dest_reg,DB_wrReq_dma,MemRead_io,DACK1,DACK2,HREQ,Address_io,DB_io,EOP,clk,cs,IORead_io,DREQ1,DREQ2,HACK,wordcount_io,MemToMem,DB_tri_dma);

endmodule
