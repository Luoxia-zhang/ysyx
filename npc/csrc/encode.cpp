#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vencode.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

VerilatedContext* contextp=NULL;
VerilatedVcdC* tfp = NULL;

static Vencode* top;

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

void sim_init(){
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new Vencode;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("vcd/encode.vcd");
}

void sim_exit(){
	step_and_dump_wave();
	tfp->close();
}

int main(){
	sim_init();

	int i=0;
	while(i<20){
		int x=rand()&15;
		int en=rand()&1;

		top->x=x;
		top->en=en;
			
		step_and_dump_wave();
	}

	sim_exit();
}
