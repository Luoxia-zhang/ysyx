module alu(
	input cin,
	input [3:0] a,b,
	output carry,
	output zero,
	output overflow,
	output [3:0] result
);
wire [3:0] w;
assign w={4{cin}}^b;
assign {carry,result}=a + w + {{3{1'b0}},cin} ;
assign overflow=(a[3] == w[3])&&(result[3] != a[3]);

assign zero = ~(|result);
endmodule

