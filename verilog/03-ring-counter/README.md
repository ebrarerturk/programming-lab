# 4-bit Ring Counter  
The circuit circulates a single `1` across a 4-bit register, moving left on each clock cycle and wrapping back to the beginning.

## What I did
- Designed a 4-bit ring counter using sequential logic (`posedge clk`).
- Added a reset so the counter always starts at `0001`.
- Wrote a testbench to observe the shifting sequence.

## What I learned
- How to describe sequential logic with clock and reset.
- How bit concatenation `{}` can be used for shifting/rotating.
- The difference between static values and values that update on each clock edge.

## Expected output
On each clock edge the `1` moves left and then wraps around:
0001 -> 0010 -> 0100 -> 1000 -> 0001 -> ...

## Files
- `src/ring_counter.v` → design
- `tb/ring_counter_tb.v` → testbench

## How to simulate
I tested this on **EDA Playground**.  
It can also be simulated locally with Icarus Verilog:

```bash
iverilog -o sim/out.vvp src/ring_counter.v tb/ring_counter_tb.v
vvp sim/out.vvp
