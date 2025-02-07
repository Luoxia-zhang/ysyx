TARGET=keyboard
VSRC = $(wildcard ./vsrc/$(TARGET).v)
CSRC = $(wildcard ./csrc/$(TARGET).cpp)

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	
	verilator -Wall --cc --exe --build --trace $(VSRC) $(CSRC) --Wno-DECLFILENAME
	make -C obj_dir -f V$(TARGET).mk V$(TARGET)

include ../Makefile
