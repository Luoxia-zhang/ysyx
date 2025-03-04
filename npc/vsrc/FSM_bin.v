module FSM_bin
(
  input   clk, in, reset,
  output reg out
);

parameter[3:0] S0 = 0, S1 = 1, S2 = 2, S3 = 3,
          S4 = 4, S5 = 5, S6 = 6, S7 = 7, S8 = 8;

wire [3:0] state_din, state_dout;
wire state_wen;

SimReg#(4,0) state(clk, reset, state_din, state_dout, state_wen);

assign state_wen = 1;

MuxKeyWithDefault#(9, 4, 1) outMux(.out(out), .key(state_dout), .default_out(0), .lut({
  S0, 1'b0,
  S1, 1'b0,
  S2, 1'b0,
  S3, 1'b0,
  S4, 1'b1,
  S5, 1'b0,
  S6, 1'b0,
  S7, 1'b0,
  S8, 1'b1
}));

MuxKeyWithDefault#(9, 4, 4) stateMux(.out(state_din), .key(state_dout), .default_out(S0), .lut({
  S0, in ? S5 : S1,
  S1, in ? S5 : S2,
  S2, in ? S5 : S3,
  S3, in ? S5 : S4,
  S4, in ? S5 : S4,
  S5, in ? S6 : S1,
  S6, in ? S7 : S1,
  S7, in ? S8 : S1,
  S8, in ? S8 : S1
}));

endmodule

module SimReg #(parameter WIDTH = 4, INIT_VALUE = 0) (
  input clk, reset,
  input [WIDTH-1:0] state_din,
  output reg [WIDTH-1:0] state_dout,
  input state_wen
);

  always @(posedge clk or posedge reset) begin
    if (!reset)
      state_dout <= INIT_VALUE;  
    else if (state_wen)
      state_dout <= state_din;         
  end

endmodule

module MuxKeyWithDefault #(parameter NR_KEY = 2, KEY_LEN = 1, DATA_LEN = 1) (
  output reg [DATA_LEN-1:0] out,
  input [KEY_LEN-1:0] key,
  input [DATA_LEN-1:0] default_out,
  input [NR_KEY*(KEY_LEN + DATA_LEN)-1:0] lut
);

  localparam PAIR_LEN = KEY_LEN + DATA_LEN;
  wire [PAIR_LEN-1:0] pair_list [NR_KEY-1:0];
  wire [KEY_LEN-1:0] key_list [NR_KEY-1:0];
  wire [DATA_LEN-1:0] data_list [NR_KEY-1:0];

  generate
    for (genvar i = 0; i < NR_KEY; i = i + 1) begin
      assign pair_list[i] = lut[PAIR_LEN*(i+1)-1 : PAIR_LEN*i];
      assign key_list[i]  = pair_list[i][PAIR_LEN-1:DATA_LEN];
      assign data_list[i] = pair_list[i][DATA_LEN-1:0];
    end
  endgenerate

  always @(*) begin
    out = default_out;
    for (integer i = 0; i < NR_KEY; i = i + 1) begin
      if (key == key_list[i]) begin
        out = data_list[i];
      end
    end
  end

endmodule

