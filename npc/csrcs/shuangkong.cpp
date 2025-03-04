#include <nvboard.h>
#include "../build/obj_dir/Vshuangkong.h"
 
static TOP_NAME dut;
 
void nvboard_bind_all_pins(TOP_NAME* shuangkong);

int main() {
  nvboard_bind_all_pins(&dut);
  nvboard_init();

  while(1) {
    nvboard_update();
    dut.eval(); 
 	}
}
