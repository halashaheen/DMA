`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:30:13 12/17/2019 
// Design Name: 
// Module Name:    decoder 
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
module decoder(
input [2:0]in,
output reg io1,
output reg io2,
output  reg mem
    );
always @ (in)
begin
case(in)
3'b000:begin io1 <= 1; io2 <= 0; mem <= 0; end
3'b001:begin io1 <= 0; io2 <= 1; mem <= 0; end
default:begin io1 <= 0; io2 <= 0; mem <= 1; end
endcase
end
endmodule
