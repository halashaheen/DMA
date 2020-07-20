`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:40:03 12/16/2019 
// Design Name: 
// Module Name:    pro 
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
////////////////////////////////////////////////////////////////////////////////////
module pro(DB_tri,DB_wrReq,DB_io,Address_io,cs,clk,HACK,HREQ,mode_tb,MemToMem,EOP,IORead_io,MemRead_io,wordcount_io, C,A,B );
reg IORead;
reg MemRead;
reg [7:0]Address;
reg [7:0] wordcount;
reg [7:0]DB;
inout IORead_io;
inout MemRead_io;
inout[7:0] wordcount_io;
inout [7:0] DB_io;
inout[7:0]Address_io;

input DB_tri;
output reg DB_wrReq;
input [2:0]mode_tb;
output reg MemToMem;
output reg cs;
input clk;
input HREQ;
output reg HACK;
input EOP;
output reg [7:0]A;
output reg [7:0]B;
output reg [7:0]C;


assign IORead_io=(DB_tri)?IORead:8'bzzzzzzzz;
assign MemRead_io=(DB_tri)?MemRead:8'bzzzzzzzz;
assign wordcount_io=(DB_tri)?wordcount:8'bzzzzzzzz;
assign Address_io=(DB_tri)?Address:8'bzzzzzzzz;
assign DB_io=(DB_tri)?DB:8'bzzzzzzzz;


initial 
begin
A=8'b00000001;
B=8'b00000011;
cs<=0;
MemToMem <=0;
end

always @ (mode_tb,HREQ)
begin
 
case (mode_tb)
3'b000://send DMA a Task
begin
repeat(1)@(posedge clk);
begin
cs = 1;
MemToMem <=0;
end

repeat(1)@(posedge clk);
begin
DB_wrReq<=1;
IORead <= 0;
wordcount <= 3;
DB <= 100;
@(negedge clk) begin DB_wrReq <=0; end
end

repeat(1)@(posedge clk);
begin
DB_wrReq<=1;
DB <=10;
@(negedge clk) begin DB_wrReq <=0;  end
end
repeat(1)@(posedge clk );
begin
cs <=0;
HACK <=1;   //cpu will leave the bus
end
end

3'b001://read from Memory / IO

begin 
repeat(1)@(posedge clk);
begin
MemToMem <=0;
cs <= 1;
end

repeat(1)@(posedge clk)
begin
DB_wrReq<=1;
IORead <= 1;
wordcount <= 3;
DB <=55;
@(negedge clk) begin DB_wrReq <=0; end
end

repeat(1)@(posedge clk);
begin
DB_wrReq<=1;
DB <=100;
@(negedge clk) begin DB_wrReq <=0; end
end
repeat(3)@(posedge clk );
begin
cs <=0;
HACK <=1;   //cpu will leave the bus
end
end

3'b010://write to Memory 
begin 
@(posedge clk)
begin
DB_wrReq<=1;
MemRead <=0;
Address<=150;
DB <=200;
@(negedge clk) begin DB_wrReq <=0; end

end
end

3'b011://READ from Memory 
begin 
@(posedge clk)
begin
DB_wrReq<=1;
MemRead <=1;
Address<=150;
B <= DB_io;
@(negedge clk) begin DB_wrReq <=0; end
end
end

3'b100://write to IO
begin 
@(posedge clk)
begin
DB_wrReq<=1;
//C<=1;
IORead <=0;
Address<=45;
DB <=40;
@(negedge clk)begin DB_wrReq <=0; end
end
end

3'b101://READ from IO 
begin 
@(posedge clk)
begin
DB_wrReq<=1;
IORead <=1;
Address<=60;
A <= DB_io;
@(negedge clk) begin DB_wrReq <=0; end
end
end 

3'b110://memory to memory
begin
repeat(1)@(posedge clk);
begin
cs=1;
MemToMem <= 1;
end

repeat(1)@(posedge clk);
begin
DB_wrReq<=1;
wordcount <= 5;
DB <=70;
@(negedge clk) begin DB_wrReq <=0; end
end

repeat(1)@(posedge clk);
begin
DB_wrReq<=1;
DB <=100;
@(negedge clk) begin DB_wrReq <=0; end
end
repeat(1)@(posedge clk );
begin
MemToMem <= 0;
cs<=0;
HACK <=1;   //cpu will leave the bus
end
end 
3'b111: 
begin
if(HREQ)
begin
HACK <=1;   //cpu will leave the bus
end
//C <= 8'b11111111;
C <= A+B;
//C = C+1;
//A = A+B;
//A <= A+1;
end 
endcase 
end 
endmodule
