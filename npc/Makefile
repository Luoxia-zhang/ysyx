VSRC = $(wildcard ./vsrc/example.v)
CSRC = $(wildcard ./csrc/sim_main.cpp)
all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	
	verilator -Wall --cc --exe --build --trace $(VSRC) $(CSRC) 
	make -C obj_dir -f Vexample.mk Vexample

include ../Makefile
