`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:08:39 12/17/2019 
// Design Name: 
// Module Name:    memory 
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
module memory(Address, clk , MemRead , Enable,DB_tri,DB_wrReq , DB_io);
input DB_tri;
output reg DB_wrReq;
reg [7:0]DB;
input [7:0] Address;
input  MemRead;
inout [7:0] DB_io;
input clk;
input Enable;
integer i;
reg [7:0]mem[64:255];
assign DB_io=(DB_tri)?DB:8'bZZZZZZZZ;
initial
begin
for(i=64;i<256;i=i+1)
begin
mem[i]=i;
end
end

always @ (posedge clk)
begin 
if(Enable == 1 && MemRead==1 )
begin
DB_wrReq <=1;
DB <= mem[Address];
@(negedge clk) begin DB_wrReq <=0; end
end
else if (Enable == 1 && MemRead==0)
begin
mem[Address] <= DB_io;
end
end
endmodule
 