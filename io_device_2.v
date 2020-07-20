module iodevice_2(DB_io,wrReq,wtri,IO_io,DREQ,WORD_COUNT_io,clk,DACK,ENABLE,ADDRESS,mode_tb);
input wtri;
output reg wrReq;
inout [7:0]DB_io;
reg[7:0]DB;
reg[7:0]IO;
reg[7:0] WORD_COUNT;
input [1:0] mode_tb;
input [7:0]ADDRESS;
inout [7:0]WORD_COUNT_io;
inout IO_io ;
input clk;
input ENABLE;
input DACK;
integer i;
output reg DREQ;
reg [7:0]mem[32:63];

assign DB_io=(wtri)?DB:8'bZZZZZZZZ; 
assign IO_io=(wtri)?IO:8'bZZZZZZZZ;
assign WORD_COUNT_io=(wtri)?WORD_COUNT:8'bZZZZZZZZ;

initial
begin
for(i=32;i<64;i=i+1)
begin
mem[i]=i;
end

end

always @ *
begin
case (mode_tb) 
2'b00:  // io device send req write to dma
begin
repeat(1)@(posedge clk);begin DREQ<=1;end
wait(DACK)begin 
 
 wrReq <=1;
 IO <=0;
 WORD_COUNT <=7;
 DB <= 65;
 DREQ<=0;
 @(negedge clk) begin wrReq <=0; end
end 
end
 
2'b01:          //io device send req read to dma
begin

/*repeat(1)@(posedge clk);*/    /*hala*/
/*DREQ=1;*/
repeat(1)@(posedge clk);begin DREQ<=1;end
wait(DACK) /*hala if==>dack*/
begin
 wrReq <=1;
 IO<=1;
 WORD_COUNT<=15;
 DB<= 90;
 @(negedge clk) begin wrReq <=0; end
 end
 end
 
default:  begin     // processor or DMA  send io to i/o device
@(posedge clk)
begin
if(ENABLE == 1)
begin
if (IO_io==0)   
/*write*/
begin
//repeat(1)@(posedge clk);/*hala*/
mem[ADDRESS]<= DB_io ; 
end

if(IO_io==1)
/*read*/
begin
repeat(1)@(posedge clk);/*hala*/
begin
wrReq <=1;
DB <= mem[ADDRESS];
//address_sent_to_io<=ADDRESS;
@(negedge clk) begin wrReq <=0; end  
end
end

 end 
 end
 end 
 
endcase
end 
endmodule

//module io_tb();

//reg posedgeclk;
//reg DATA;
//wire ADDRESS;
//wire WORD_COUNT;