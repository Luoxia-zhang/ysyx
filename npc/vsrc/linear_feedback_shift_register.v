module linear_feedback_shift_register(
	input clk,
	input rst,
	output reg [7:0] num,
	output reg [3:0] num0,
	output reg [3:0] num1,
	output reg [6:0] seg0,
	output reg [6:0] seg1
);
reg x;
	always@(posedge clk)begin
		if(rst)begin
			num<=8'b00000001;
		end
		else begin
			x <= num[4]^num[3]^num[2]^num[0];
			num<={x,num[7:1]};
		end
	end
assign num0=num[3:0];
assign num1=num[7:4];
seg16 my_seg(
	.num(num0),
	.segs(seg0)
);	

seg16 your_seg(
	.num(num1),
	.segs(seg1)
);
endmodule

module seg16(
    input [3:0] num,
    output reg [6:0] segs
);
always@(*)begin
	case(num)
  4'd0:segs= 7'b0000001; 
  4'd1:segs= 7'b1001111;
	4'd2:segs= 7'b0010010;
  4'd3:segs= 7'b0000110;
  4'd4:segs= 7'b1001100;
	4'd5:segs= 7'b0100100;
	4'd6:segs= 7'b0100000;
	4'd7:segs= 7'b0001111;
  4'd8:segs= 7'b0000000;
  4'd9:segs= 7'b0001100;
  4'd10:segs= 7'b0001000;
  4'd11:segs= 7'b1100000;
  4'd12:segs= 7'b0110001;
  4'd13:segs= 7'b1000010;
  4'd14:segs= 7'b0110000;
  4'd15:segs= 7'b0111000;
	default:segs=7'b1111111;
	endcase
end
endmodule
