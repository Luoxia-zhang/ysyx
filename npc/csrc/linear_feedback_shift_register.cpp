#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vlinear_feedback_shift_register.h"

VerilatedContext* contextp = nullptr;
VerilatedVcdC* tfp = nullptr;
Vlinear_feedback_shift_register* top = nullptr;

void step_and_dump_wave() {
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
}

void reset(int n) {
    top->rst = 1;  // 拉高复位
    while (n-->0) {
        top->clk = 1;
        step_and_dump_wave();
        top->clk = 0;
        step_and_dump_wave();
    }
    top->rst = 0;  // 释放复位
    step_and_dump_wave();
}

void sim_init() {
    contextp = new VerilatedContext;
    contextp->traceEverOn(true);
    tfp = new VerilatedVcdC;
    
    top = new Vlinear_feedback_shift_register;
    top->trace(tfp, 99);
    tfp->open("vcd/linear_feedback_shift_register.vcd");

    top->clk = 0;
    top->rst = 0;  
    reset(5);  
}

void sim_exit() {
    step_and_dump_wave();
    tfp->close();
    delete top;
    delete tfp;
    delete contextp;
}

int main() {
    sim_init();  // 初始化 + 复位

    while(contextp->time()<20) {

        top->clk = 1;
        step_and_dump_wave();

        top->clk = 0;
        step_and_dump_wave();
    }

    sim_exit();
    return 0;
}

