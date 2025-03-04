#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vkeyboard.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
Vkeyboard* top = NULL;

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(10); // 每个周期 10ns
    tfp->dump(contextp->time());
}

void single_cycle() {
    top->clk = 1; step_and_dump_wave();
    top->clk = 0; step_and_dump_wave();
}

void reset(int n) {
    top->clrn = 0;
    while (n-- > 0) single_cycle();
    top->clrn = 1;
}

void sim_init() {
    contextp = new VerilatedContext;
    tfp = new VerilatedVcdC;
    top = new Vkeyboard;
    
    contextp->traceEverOn(true);
    top->trace(tfp, 99);
    tfp->open("vcd/keyboard.vcd");

    top->clk = 0;
    top->clrn = 1;
    top->ps2_clk = 1; // 默认高电平
    top->ps2_data = 1;
    top->nextdata_n = 1;

    reset(10);
}

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
    delete tfp;
    delete top;
    delete contextp;
}

// 发送 1 个 PS/2 按键数据
void send_ps2_data(uint8_t data) {
    uint16_t ps2_packet = (data << 1) | (1 << 9); // 8-bit 数据 + 停止位 1
    top->ps2_clk = 1; // 默认高电平
    single_cycle();

    // 发送起始位（0）
    top->ps2_data = 0;
    top->ps2_clk = 0; single_cycle(); // 下降沿
    top->ps2_clk = 1; single_cycle(); // 上升沿

    // 发送 8-bit 数据
    for (int i = 0; i < 8; i++) {
        top->ps2_data = (ps2_packet >> i) & 1;
        top->ps2_clk = 0; single_cycle(); // 下降沿
        top->ps2_clk = 1; single_cycle(); // 上升沿
    }

    // 发送停止位（1）
    top->ps2_data = 1;
    top->ps2_clk = 0; single_cycle();
    top->ps2_clk = 1; single_cycle();
}

int main() {
    sim_init();

    srand(time(0)); // 初始化随机种子
    
    for (int i = 0; i < 5; i++) { // 发送 5 组随机扫描码
        uint8_t random_key = rand() % 256; // 生成 8-bit 随机数据
        send_ps2_data(random_key);
    }
    // 继续运行足够长时间以检查 FIFO 读取
    for (int i = 0; i < 100; i++) {
        top->nextdata_n = 1;
        if (top->ready) {
            top->nextdata_n = 0; // 读取 FIFO
        }
        single_cycle();
    }

    sim_exit();
    return 0;
}

