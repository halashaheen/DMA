`timescale 1ns / 1ps
module dma_module
(add_reg,data,mem_op,dma,data_reg,cnt_reg,src_reg,dest_reg,dma,mem,dack1,dack2,hrq,AB,DB,EOP,clk,cs,IO,dreq1,dreq2
,hack,word_count,mem_to_mem,dma_ctrl);
output dack1,dack2,hrq;
output reg dma;
input dma_ctrl;
inout mem;
reg dack1,dack2 ,hrq  ;
inout  [7:0] AB;
inout  [7:0] DB;
output EOP;
reg EOP;
input [7:0] word_count;
input clk,cs,dreq1,dreq2,hack,mem_to_mem;
inout IO;
output reg [7:0] cnt_reg;
output reg [7:0] add_reg;
output reg   [7:0] data_reg;
reg [6:0] i=0;
output reg [7:0] src_reg;
output reg [7:0] dest_reg;
integer j=2;
integer k;
output reg [7:0] data;
//integer flag=1;
reg [7:0] address;
output reg mem_op;
reg io_reg; 

// mem_op=1 read  -----  mem_op=0 write 
assign DB=(dma_ctrl)?data_reg:8'bzzzzzzzz;
assign AB=(dma_ctrl)?address: 8'bzzzzzzzz;
assign mem=(dma_ctrl)?mem_op:1'bz;
assign IO=(dma_ctrl)?io_reg:1'bz;


always@(posedge clk )//or cs or  hack

begin
if(cs==0)//DMA is waiting for i/o request

begin

if(dreq1==1)

begin
hrq<=1;
wait(hack)//DMA now takes control of bus //comment : dma must write command to take bus 
/*hala*/
begin
//in first clk cycle 
EOP<=0;
repeat(1)@(posedge clk);
begin
dack1<=1;
dack2<=0;
end

repeat(1)@(posedge clk);
begin
cnt_reg<=word_count; //word_count=control_bus[9:2];
add_reg<=DB; //address of memory location comes from data bus
src_reg<=DB;
dest_reg<=IO;
end

case(IO)
0:
begin
repeat(1)@(posedge clk);
for( i=0;i<cnt_reg;i=i+1)
begin
repeat(1)@(posedge clk);
begin
dma<=1;
address<=src_reg;
src_reg<=src_reg+1;
mem_op<=1;
@(negedge clk)begin dma<=0; end 
end

repeat(2)@(posedge clk);/*try it 1,2*/
begin
data<=DB;
end

repeat(1)@(posedge clk);
begin
dma<=1;
address<=i;
io_reg<=0;
data_reg<=data;
@(negedge clk)begin dma<=0; end
end
end
EOP<=1;
hrq<=0; //comment : dma must write command to leave bus and allow processor to take control of bus
end



1:
begin
repeat(1)@(posedge clk);
for( i=0;i<cnt_reg;i=i+1)
begin
// read from IO device
//j<=3;
//k<=4;
repeat(1)@(posedge clk);
begin
//AB<=i;
dma<=1;
address<=i;
//mem<=0;
//mem_op<=0;   /*hala*/
io_reg<=1;
//j<=j+2;
@(negedge clk) begin dma<=0;end
end

/*another soln*/
repeat(3)@(posedge clk)
begin
data<=DB;
end

//data from i/o is on db
repeat(1)@(posedge clk);
begin
//AB<=add_reg;
dma<=1;
address<=src_reg;/*src instead of add*/
src_reg<=src_reg+1;
mem_op<=0;
data_reg<=data;/*hala*/
//data_reg<=DB;
//k<=k+2;
@(negedge clk) begin dma<=0;end
end
end
EOP<=1;
hrq<=0;
end
endcase
end  // el end bta3 el hlda
end // el end bta3 el dreq1 

if(dreq2==1)/*hala*/
begin
hrq<=1;
wait(hack)//DMA now takes control of bus //comment : dma must write command to take bus 
/*hala*/
begin
//in first clk cycle 
EOP<=0;
repeat(1)@(posedge clk);
begin
dack1<=0;
dack2<=1;
end

repeat(1)@(posedge clk);
begin
cnt_reg<=word_count; //word_count=control_bus[9:2];
add_reg<=DB; //address of memory location comes from data bus
src_reg<=DB;
dest_reg<=IO;
end

case(IO)
0:
begin
repeat(1)@(posedge clk);
for( i=32;i<cnt_reg+32;i=i+1)
begin
repeat(1)@(posedge clk);
begin
dma<=1;
address<=src_reg;
src_reg<=src_reg+1;
mem_op<=1;
@(negedge clk)begin dma<=0; end 
end

repeat(2)@(posedge clk);/*try it 1,2*/
begin
data<=DB;
end

repeat(1)@(posedge clk);
begin
dma<=1;
address<=i;
io_reg<=0;
data_reg<=data;
@(negedge clk)begin dma<=0; end
end
end
EOP<=1;
hrq<=0; //comment : dma must write command to leave bus and allow processor to take control of bus
end



1:
begin
repeat(1)@(posedge clk);
for( i=32;i<cnt_reg+32;i=i+1)
begin
// read from IO device
//j<=3;
//k<=4;
repeat(1)@(posedge clk);
begin
//AB<=i;
dma<=1;
address<=i;
//mem<=0;
//mem_op<=0;   /*hala*/
io_reg<=1;
//j<=j+2;
@(negedge clk) begin dma<=0;end
end

/*another soln*/
repeat(3)@(posedge clk)
begin
data<=DB;
end

//data from i/o is on db
repeat(1)@(posedge clk);
begin
//AB<=add_reg;
dma<=1;
address<=src_reg;/*src instead of add*/
src_reg<=src_reg+1;
mem_op<=0;
data_reg<=data;/*hala*/
//data_reg<=DB;
//k<=k+2;
@(negedge clk) begin dma<=0;end
end
end
EOP<=1;
hrq<=0;
end
endcase
end  // el end bta3 el hlda
end


////////<=======
end // el end bta3 el cs==0 


else if(cs==1)
//processor gives task to DMA
begin
if(mem_to_mem==0)
begin
//I/O --- MEM
repeat(1)@(posedge clk);
begin
src_reg<=DB;
cnt_reg<=word_count;
end

repeat(1)@(posedge clk);
begin
dest_reg<=DB;
end

case(IO)
0:
begin
// write in IO device
//remember for loop might arise problems
//for loop to 1-take address from memory 2-generate address for i/o device
//j<=3;
//k<=4;
for(i=0;i<cnt_reg;i=i+1)
begin // may arise problem
repeat(1)@(posedge clk);
//in second clk cycle
begin
//AB<=src_reg;
dma<=1;
address<=src_reg;
src_reg<=src_reg+1;
//mem<=1;
mem_op<=1;
//j<=j+2;
@(negedge clk) begin dma<=0; end
end // may be changed
//now memory should know which address to read from
//so it should output data on Data bus in next cycle
repeat(2)@(posedge clk);
begin
data<=DB;
end
repeat(1)@(posedge clk);
//in third  clk cycle
begin
//AB<=dest_reg;
dma<=1;
data_reg<=data;
address<=dest_reg;
io_reg<=0;
mem_op<=0;
//the address bus has value to address the I/O device 
//now the i/o has data on data bus so it should store it in the address on (address bus) provided in this cycle
//k<=k+2;
dest_reg<=dest_reg+1;
@(negedge clk)begin dma<=0; end
end
end 
// we should now terminate DMA operation
EOP<=1; //comment : dma must write command to leave bus and allow processor to take control of bus
end

1:

begin
for( i=0;i<cnt_reg;i=i+1)
begin
// read from IO device
//j<=3;
//k<=4;
repeat(1)@(posedge clk);
begin
//AB<=src_reg;
dma<=1;
address<=src_reg;
src_reg<=src_reg+1;
//mem<=0;
io_reg<=1;

//j<=j+2;
@(negedge clk)begin dma<=0; end
end

repeat(3)@(posedge clk);
begin
data<=DB;
end

//data from i/o is on db
repeat(1)@(posedge clk);
begin
//AB<=dest_reg;
dma<=1;
mem_op<=0;
address<=dest_reg;
data_reg<=data;
dest_reg<=dest_reg+1;
//k<=k+2;
@(negedge clk)begin dma<=0; end
end
end
EOP<=1;
end
endcase

end

else if(mem_to_mem==1)
begin

EOP<=0;
dack1<=0;
dack2<=0;

//j<=3;
//k<=4;
repeat(1)@(posedge clk);
begin
src_reg<=DB;
cnt_reg<=word_count;
end

repeat(1)@(posedge clk);
begin
dest_reg<=DB;
end

for(i=0;i<cnt_reg;i=i+1)
begin
repeat(1)@(posedge clk);
begin
//mem<=1;
dma<=1;
mem_op<=1;
//AB<=src_reg;
address<=src_reg;
src_reg<=src_reg+1;
//j<=j+2;//may cause problem
@(negedge clk)begin dma<=0; end
end

repeat(2)@(posedge clk);
begin
data<=DB;
end 

repeat(1)@(posedge clk);
begin
//mem<=0;
dma<=1;
data_reg<=data;
mem_op<=0;
//DB<=data_reg;
//AB<=dest_reg;
address<=dest_reg;
dest_reg<=dest_reg+1;

//k<=k+2;
@(negedge clk)begin dma<=0; end
end
end
end
end


end
endmodule