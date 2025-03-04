#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/VFSM_bin.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp =NULL;

static VFSM_bin* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void single_cycle(){
	top->clk = 1;step_and_dump_wave();
	top->clk = 0;step_and_dump_wave();
}

void resetnew(int n){
	top->reset = 1;
	while (n-->0) single_cycle();
	top->reset = 0;
	step_and_dump_wave();
}

void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new VFSM_bin;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("vcd/FSM_bin.vcd");

	top->clk=0;
	top->reset=0;
	resetnew(5);
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
	delete top;
	delete tfp;
	delete contextp;
}

int main() {
  sim_init();
	while(contextp->time()<20){
		int in = rand()&1;
		top->in=in;
		single_cycle();
	}

	sim_exit();
	return 0;
}
