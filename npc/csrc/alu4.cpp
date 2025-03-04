#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Valu4.h"

VerilatedContext* contextp =NULL;
VerilatedVcdC* tfp = NULL;

static Valu4* top ;

void sim_init(){
	contextp = new VerilatedContext;
	tfp  = new VerilatedVcdC;
	top = new Valu4;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("vcd/alu4.vcd");
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
		int a=rand()&15;
		int b=rand()&15;
		int ctr=rand()&7;

		top->a=a;
		top->b=b;
		top->ctr=ctr;

		step_and_dump_wave();
	}
	sim_exit();
}
