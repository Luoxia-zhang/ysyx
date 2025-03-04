module keyboard(
    input clk,
    input resetn,
    input ps2_clk,
    input ps2_data,
    output reg [6:0] seg0, seg1, seg2, seg3, seg4, seg5 // 六个七段数码管的输出
);

    reg [9:0] buffer;  // PS/2 数据位
    reg [3:0] count;    // 计数 PS/2 数据位
    reg [2:0] ps2_clk_sync;

    // ASCII 映射表（这里只列出部分字符，你可以根据需要扩展）
    function [7:0] key_to_ascii(input [7:0] keycode);
        case (keycode)
								8'h1C: key_to_ascii = 8'h41; // A
                8'h32: key_to_ascii = 8'h42; // B
                8'h21: key_to_ascii = 8'h43; // C
                8'h23: key_to_ascii = 8'h44; // D
                8'h24: key_to_ascii = 8'h45; // E
                8'h2B: key_to_ascii = 8'h46; // F
                8'h34: key_to_ascii = 8'h47; // G
                8'h33: key_to_ascii = 8'h48; // H
                8'h43: key_to_ascii = 8'h49; // I
                8'h3B: key_to_ascii = 8'h4A; // J
                8'h42: key_to_ascii = 8'h4B; // K
                8'h4B: key_to_ascii = 8'h4C; // L
                8'h3A: key_to_ascii = 8'h4D; // M
                8'h31: key_to_ascii = 8'h4E; // N
                8'h44: key_to_ascii = 8'h4F; // O
                8'h4D: key_to_ascii = 8'h50; // P
                8'h15: key_to_ascii = 8'h51; // Q
                8'h2D: key_to_ascii = 8'h52; // R
                8'h1B: key_to_ascii = 8'h53; // S
                8'h2C: key_to_ascii = 8'h54; // T
                8'h3C: key_to_ascii = 8'h55; // U
                8'h2A: key_to_ascii = 8'h56; // V
                8'h1D: key_to_ascii = 8'h57; // W
                8'h22: key_to_ascii = 8'h58; // X
                8'h35: key_to_ascii = 8'h59; // Y
                8'h1A: key_to_ascii = 8'h5A; // Z
                8'h45: key_to_ascii = 8'h30; // 0
                8'h16: key_to_ascii = 8'h31; // 1
                8'h1E: key_to_ascii = 8'h32; // 2
                8'h26: key_to_ascii = 8'h33; // 3
                8'h25: key_to_ascii = 8'h34; // 4
                8'h2E: key_to_ascii = 8'h35; // 5
                8'h36: key_to_ascii = 8'h36; // 6
                8'h3D: key_to_ascii = 8'h37; // 7
                8'h3E: key_to_ascii = 8'h38; // 8
                8'h46: key_to_ascii = 8'h39; // 9
            default: key_to_ascii = 8'h20; // 默认返回空格
        endcase
    endfunction

    reg [7:0] ascii_code;       // 当前按键的 ASCII 码
    reg [15:0] keypress_count;  // 总按键次数
		reg key_valid;
		reg [7:0] current_key;

		reg [1:0] state ;
		reg key_pressed;
		localparam IDLE = 2'b00, PRESSED = 2'b01, RELEASED = 2'b10; 

    always @(posedge clk) begin
        ps2_clk_sync <= {ps2_clk_sync[1:0], ps2_clk};
    end

    wire sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

		always @(posedge clk) begin
        if (resetn == 0) begin
            count <= 0;
            keypress_count <= 0;
						state <= IDLE;
						current_key <= 8'h00;
						key_pressed <= 1'b0;
						ascii_code <= 8'h00;
            seg0 <= 7'b1111111;
            seg1 <= 7'b1111111;
            seg2 <= 7'b1111111;
            seg3 <= 7'b1111111;
            seg4 <= 7'b1111111;
            seg5 <= 7'b1111111;
        end
        else begin
					key_valid <= 1'b0;
						if (sampling) begin
                if (count == 4'd10) begin
                    if ((buffer[0] == 0) &&    // start bit
                        (ps2_data) &&           // stop bit
                        (^buffer[9:1]))	begin   // 奇校验
											case(state)
												IDLE:begin
													if(buffer[8:1] == 8'hF0)begin
														state <= RELEASED;
														key_pressed <= 1'b0;
													end else begin
														current_key <= buffer[8:1];
														ascii_code <= key_to_ascii(buffer[8:1]);
														state <= PRESSED;
														key_pressed <= 1'b1;
													end
												end
												PRESSED:begin
													if (buffer[8:1] == 8'hF0)begin
														state <= RELEASED;
														key_pressed <= 1'b0;
													end
												end
												RELEASED:begin
													keypress_count <= keypress_count + 1;
													state <= IDLE;
													key_valid <= 1'b1;
												end
												default:begin
													state <= IDLE;
													$display("Invalid state detected: %b", state);
												end
											endcase
										end
										count <=0;
								end else begin
                    buffer[count] <= ps2_data; // 存储 ps2_data
                    count <= count + 1;
                end
						end
				end
		end

	always @(posedge clk) begin
		if(!key_pressed)begin
			{seg3, seg2, seg1, seg0} <= {4{7'b1111111}};
		end else begin
        seg0 <= display_segment(buffer[4:1]);    // 键码低 4 位
        seg1 <= display_segment(buffer[8:5]);    // 键码高 4 位
        seg2 <= display_segment(ascii_code[3:0]); // ASCII 低 4 位
        seg3 <= display_segment(ascii_code[7:4]); // ASCII 高 4 位
		end

    seg4 <= display_segment(keypress_count[3:0]); // 总次数低 4 位
    seg5 <= display_segment(keypress_count[7:4]); // 总次数高 4 位
	end
    // 显示转换函数，将输入的数字转换为七段数码管对应的编码
		function [6:0] display_segment(input [3:0] value);
        case(value)
            4'h0: display_segment = 7'b0000001; // 显示 0
            4'h1: display_segment = 7'b1001111; // 显示 1
            4'h2: display_segment = 7'b0010010; // 显示 2
            4'h3: display_segment = 7'b0000110; // 显示 3
            4'h4: display_segment = 7'b1001100; // 显示 4
            4'h5: display_segment = 7'b0100100; // 显示 5
            4'h6: display_segment = 7'b0100000; // 显示 6
            4'h7: display_segment = 7'b0001111; // 显示 7
            4'h8: display_segment = 7'b0000000; // 显示 8
            4'h9: display_segment = 7'b0000100; // 显示 9
            4'hA: display_segment = 7'b0001000; // 显示 A
            4'hB: display_segment = 7'b1100000; // 显示 B
            4'hC: display_segment = 7'b0110001; // 显示 C
            4'hD: display_segment = 7'b1000010; // 显示 D
            4'hE: display_segment = 7'b0110000; // 显示 E
            4'hF: display_segment = 7'b0111000; // 显示 F
            default: display_segment = 7'b1111111; // 默认显示 0
        endcase
		endfunction

endmodule

