#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vencode38.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vencode38* top;

void step_and_dump_wave(){
  top->eval();
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}
void sim_init(){
  contextp = new VerilatedContext;
  tfp = new VerilatedVcdC;
  top = new Vencode38;
  contextp->traceEverOn(true);
  top->trace(tfp, 0);
  tfp->open("vcd/encode38.vcd");
}

void sim_exit(){
  step_and_dump_wave();
  tfp->close();
}

int main(){
	sim_init();

	while(contextp->time()<20){

		int sw=rand()&255;
		int en=rand()&1;
	
		top->sw=sw;
		top->en=en;

		step_and_dump_wave();
	}

	sim_exit();
}

	
