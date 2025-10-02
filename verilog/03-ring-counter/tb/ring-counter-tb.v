// Testbench for Ring Counter 

module test_ring_counter;
    reg clk, reset;
    wire [3:0] out;

    // Instantiate the design under test (DUT)
    ring_counter dut(.clk(clk), .reset(reset), .out(out));

    // Clock: toggle every 5 time units
    always #5 clk = ~clk;

    initial begin
        clk = 0;
        reset = 1;   // apply reset
        #10 reset = 0;

        $display("Ring Counter Simulation");
        repeat (8) begin
            #10 $display("t=%0t out=%b", $time, out);
        end

        $finish;
    end
endmodule
