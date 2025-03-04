module alu(
	input [3:0] a,
	input [3:0] b,
	input [2:0] ctr,
	output reg [3:0] alu_out,
	output reg zero,carry,overflow,
	output reg less,
	output reg [3:0] temp
);
reg [3:0] xb;
always@(*)begin
	alu_out = 4'b0;less=1'b0;overflow=0;zero=0;carry=0;xb=4'd0;temp=4'b0;
	casez(ctr)
		3'b00z:begin
			xb={{4{ctr[0]}}}^b;
			{carry,alu_out} = xb + a + {3'b0,alu_out[0]};
			overflow = (a[3]==xb[3]) && (alu_out[3] != a[3]);
			zero = ~(|alu_out);
		end
		3'b011:begin
			alu_out=a&b;
		end
		3'b100:begin
			alu_out=a|b;
		end
		3'b101:begin
			alu_out=a^b;
		end
		3'b110:begin
			xb=b^4'b1111;
			{carry,temp} = xb + a + 4'b0001;
			overflow = (a[3] == xb[3])&&(temp[3] != a[3]);
			zero = ~(|temp);
			less = temp[3] ^ overflow;
			if (less ==1) alu_out=4'b0001;
			else alu_out = 4'b0000;
		end
		3'b111:begin
			xb=b^4'b1111;
			{carry,temp} = xb + a + 4'b0001;
			overflow = (a[3]==xb[3])&&(temp[3] != a[3]);
			zero=~(|temp);
			if(zero==1) alu_out=4'b0001;
			else alu_out=4'b0;
		end
		default:alu_out=4'b0;
	endcase
end
endmodule
