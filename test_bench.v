`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:01:32 12/22/2019 
// Design Name: 
// Module Name:    test_bench 
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
// Verilog Test Fixture Template

  `timescale 1 ns / 1 ps

  module tb();
reg [2:0]mode_processor;
wire [7:0]C;
reg [1:0] mode_io;
reg [1:0] mode_io2;
wire [7:0] DB; //daata_bus
wire [7:0] AB; //address_bus
wire [7:0] word_count;
wire read_io;
wire read_memory;


reg clk;
initial begin
clk <=0;

      #100
      mode_processor =3'b000;
      #300
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
		
		
end
always
	begin
		#31.25
 clk=~clk; 
 end 
  endmodule

