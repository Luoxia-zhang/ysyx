#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vbarrel_shifter.h"

VerilatedContext* contextp =NULL;
VerilatedVcdC* tfp = NULL;

static Vbarrel_shifter* top ;

void sim_init(){
	contextp = new VerilatedContext;
	tfp  = new VerilatedVcdC;
	top = new Vbarrel_shifter;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("vcd/baller_shifter.vcd");
}

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

void sim_exit(){
	step_and_dump_wave();
	tfp->close();
}

int main(){
	sim_init();

	while (contextp->time()<20){
		int din=rand()&255;
		int shamt=rand()&7;
		int LR=rand()&1;
		int AL=rand()&1;

		top->din=din;
		top->shamt=shamt;
		top->LR=LR;
		top->AL=AL;

		step_and_dump_wave();
	}
	sim_exit();
}
