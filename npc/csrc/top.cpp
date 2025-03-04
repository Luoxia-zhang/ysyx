#include <stdio.h>
#include <stdlib.h>
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "../obj_dir/Vtop.h"
#include <assert.h>

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;

static Vtop* top;

void step_and_dump_wave(){
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
}

int main(){
	contextp = new VerilatedContext;
	tfp = new VerilatedVcdC;
	top = new Vtop;
	contextp->traceEverOn(true);
	top->trace(tfp,0);
	tfp->open("vcd/top.vcd");
	
  top->y=0b00;  top->x0=0b11; top->x1=0b01; top->x2=0b00;  top->x3=0b10; step_and_dump_wave();
                top->x0=0b10; top->x1=0b01; top->x2=0b01;  top->x3=0b00; step_and_dump_wave();
  top->y=0b01;  top->x0=0b11; top->x1=0b01; top->x2=0b00;  top->x3=0b10; step_and_dump_wave();
                top->x0=0b10; top->x1=0b01; top->x2=0b01;  top->x3=0b00; step_and_dump_wave();
  top->y=0b10;  top->x0=0b11; top->x1=0b01; top->x2=0b00;  top->x3=0b10; step_and_dump_wave();
                top->x0=0b10; top->x1=0b01; top->x2=0b01;  top->x3=0b00; step_and_dump_wave();
  top->y=0b11;  top->x0=0b11; top->x1=0b01; top->x2=0b00;  top->x3=0b10; step_and_dump_wave();
                top->x0=0b10; top->x1=0b01; top->x2=0b01;  top->x3=0b00; step_and_dump_wave();
	
	step_and_dump_wave();
	tfp->close();
}
