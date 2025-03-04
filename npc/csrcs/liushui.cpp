#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "../build/obj_dir/Vliushui.h"
#include <nvboard.h>
#define MAX_SIM_TIME 200
vluint64_t sim_time = 0;
static TOP_NAME dut;

void nvboard_bind_all_pins(TOP_NAME* liushui);

void single_cycle() {
  dut.clk = 0; dut.eval();
  dut.clk = 1; dut.eval();
}

void reset(int n) {
  dut.rst = 1;
  while (n -- > 0) single_cycle();
  dut.rst = 0;
}

int main(int argc, char** argv){
	nvboard_bind_all_pins(&dut);
	nvboard_init();

	reset(10);

	while(1){
		nvboard_update();
		single_cycle();
	}
}

