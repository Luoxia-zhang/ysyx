#include "../build/obj_dir/linear_regi.h"
#include <nvboard.h>

static TOP_NAME dut;
void nvboard_bind_all_pins(TOP_NAME* linear_regi);

int main(){
	nvboard_bind_all_pins(&dut);
	nvboard_init();

	dut.clk=0;
	dut.rst=1;
	while(1){
		nvboard_update();
		dut.eval();
	}
	return 0;
}
