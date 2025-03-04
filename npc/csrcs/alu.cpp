#include "verilated.h"
#include <nvboard.h>
#include "../build/obj_dir/Valu.h"

static TOP_NAME dut;

void nvboard_bind_all_pins(TOP_NAME* alu);

int main(){
	nvboard_bind_all_pins(&dut);
	nvboard_init();

	while(1){
		nvboard_update();
		dut.eval();
	}
}

