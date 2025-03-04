module regi(
	input wire clk,
	input wire [2:0] ctrl,
	input wire [7:0] data_in,
	input wire serial_in,
	output reg [7:0] data_out
);
always@(posedge clk)begin
	data_out<=8'b0;
	case(ctrl)
		3'b000:data_out<=8'b00000000;
		3'b001:data_out<=data_in;
		3'b010:data_out<=(data_out>>1);
		3'b011:data_out<=(data_out<<1);
		3'b100:data_out<={data_out[7],data_out[7:1]};
		3'b101:data_out<={serial_in, data_out[7:1]};
		3'b110:data_out<={data_out[0],data_out[7:1]};
		3'b111:data_out<={data_out[6:0],data_out[7]};
		default:data_out<=data_out;
	endcase
end
endmodule
