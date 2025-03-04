module barrel_shifter(
    input [2:0] shamt,
    input [7:0] din,
    input LR, 
    input AL, 
    output reg [7:0] dout
);

always @(*) begin
	reg [7:0] temp;
	temp=8'b0;dout=8'b0;
    if (LR == 1) begin
        temp = shamt[2] ? {din[3:0], 4'b0} : din;
        temp = shamt[1] ? {temp[5:0], 2'b0} : temp;
        temp = shamt[0] ? {temp[6:0], 1'b0} : temp;
        dout = temp;
    end else begin  
        if (AL == 1) begin  
            temp = shamt[2] ? {{4{din[7]}}, din[7:4]} : din;
            temp = shamt[1] ? {{2{temp[7]}}, temp[7:2]} : temp;
            temp = shamt[0] ? {{1{temp[7]}}, temp[7:1]} : temp;
            dout = temp;
        end else begin  
            temp = shamt[2] ? {4'b0, din[7:4]} : din;
            temp = shamt[1] ? {2'b0, temp[7:2]} : temp;
            temp = shamt[0] ? {1'b0, temp[7:1]} : temp;
            dout = temp;
        end
    end
end

endmodule

