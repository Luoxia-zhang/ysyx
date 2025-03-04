module bcd7seg(
  input  [3:0] b,
  output reg [6:0] h
);

always@(b) begin
	case(b)
	4'd0: h<=7'b000_0001;
	4'd1: h<=7'b100_1111;
	4'd2: h<=7'b001_0010;
	4'd3: h<=7'b000_0110;
	4'd4: h<=7'b100_1100;
	4'd5: h<=7'b010_0100;
	4'd6: h<=7'b010_0000;
	4'd7: h<=7'b000_1111;
	4'd8: h<=7'b000_0000;
	4'd9: h<=7'b000_0100;
	default: h<=7'b000_0001;
	endcase
end

endmodule


module encode38(x,en,y, indicate);
  input  [7:0] x;
  input  en;
  output reg [2:0]y;
  output reg indicate;

  integer i;
  always @(x or en) begin
    if (en) begin
      y <= 0;
      if (x != 0) indicate <= 1'b1;
      else indicate <= 1'b0;
      for( i = 0; i <= 7; i = i+1)
          if(x[i] == 1)  y <= i[2:0];
    end
    else  y <= 0;
  end
endmodule



module encode(
    input [7:0]sw,
    input en,
    output reg [2:0] led_out,
    output reg indicate,
    output reg [6:0] seg_out
);

wire [2:0]w;

assign led_out = w;

encode38 encdr(
    .x(sw),
    .en(en),
    .y(w),
    .indicate(indicate)
);

bcd7seg seg0(
    .b({1'b0,w}),
    .h(seg_out)
);
endmodule

