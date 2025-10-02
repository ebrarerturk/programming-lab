# LED Shifter (Verilog)
This is my first mini project in Verilog/SystemVerilog.  
The circuit shifts a single `1` bit across an 8-bit LED register on each clock cycle.

## What I did
- Implemented a simple shift register.
- Wrote a **design file** (`src/led_shifter.sv`) and a **testbench** (`tb/led_shifter_tb.sv`).
- Ran the simulation using Icarus Verilog and observed the output.

## What I learned
- How to separate design code and testbench code.
- How to generate a clock signal in a testbench.
- The difference between design (`src`) and test (`tb`) files.
- Basics of using `$display` and `$monitor` for simulation output.

## Files
- `src/led_shifter.sv` → design file
- `tb/led_shifter_tb.sv` → testbench file

## How to simulate (Icarus Verilog)
```bash
iverilog -g2012 -o sim/out.vvp src/led_shifter.sv tb/led_shifter_tb.sv
vvp sim/out.vvp
