# 4-to-2 Priority Encoder
This is my second Verilog mini project.  
The circuit encodes which one of the 4 inputs is active into a 2-bit output.  
If multiple inputs are high at the same time, the highest index input has priority.

## What I did
- Designed a 4-to-2 priority encoder using a `casez` statement.
- Wrote a testbench to check different input patterns.
- Verified that when multiple inputs are active, the highest one is chosen.

## What I learned
- How to implement priority logic in Verilog.
- Difference between a normal encoder and a **priority encoder**.
- How to use the `casez` statement with don’t-care bits (`?`).

## Files
- `src/priority_encoder.v` → design
- `tb/priority_encoder_tb.v` → testbench

## How to simulate
I tested this on **EDA Playground**.  
It can also be simulated locally with Icarus Verilog:

```bash
iverilog -o sim/out.vvp src/priority_encoder.v tb/priority_encoder_tb.v
vvp sim/out.vvp
