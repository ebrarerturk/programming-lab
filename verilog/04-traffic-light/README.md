# Traffic Light Controller (FSM) 
It implements a simple finite state machine (FSM) that cycles through **GREEN → YELLOW → RED → GREEN**.

## What I did
- Built a 3-state FSM for a traffic light controller.
- Defined states with parameters (GREEN, YELLOW, RED).
- Wrote a testbench to check that the lights change in the correct order.

## What I learned
- How to describe a finite state machine (FSM) in Verilog.
- The role of `state` and `next_state` signals.
- How sequential logic (clock) and combinational logic (outputs/next state) work together.

## Expected output
On each clock cycle the light changes in this order:
GREEN -> YELLOW -> RED -> GREEN -> ...

## Files
- `src/traffic_light.v` → design
- `tb/traffic_light_tb.v` → testbench

## How to simulate
I tested this on **EDA Playground**.  
It can also be simulated locally with Icarus Verilog:

```bash
iverilog -o sim/out.vvp src/traffic_light.v tb/traffic_light_tb.v
vvp sim/out.vvp


