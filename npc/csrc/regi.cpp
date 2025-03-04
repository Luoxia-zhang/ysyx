#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vregi.h"

VerilatedContext* contextp =NULL;
VerilatedVcdC* tfp = NULL;

static Vregi* top;

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

void sim_init(){
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new Vregi;
	contextp->traceEverOn(true);
	top->trace(tfp,99);
	tfp->open("vcd/regi.vcd");

	top->clk = 0;
  top->ctrl = 0;
  top->data_in = 0;
  top->serial_in = 0;
}

void sim_exit(){
	step_and_dump_wave();
	tfp->close();
	delete top;
  delete tfp;
  delete contextp;
}

int main(){
	sim_init();
	while(contextp->time()<20){
		int ctrl=rand()&7;
		int data_in=rand()&255;
		int serial_in=rand()&1;

		top->ctrl=ctrl;
		top->data_in=data_in;
		top->serial_in=serial_in;

    top->clk = 1;
    step_and_dump_wave();

    top->clk = 0;
    step_and_dump_wave();
	}

	sim_exit();
	return 0;
}
