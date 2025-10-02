// Testbench for Traffic Light FSM

module test_traffic_light;

    reg clk, reset;
    wire red, green, yellow;

    // instantiate the design
    traffic_light dut(
        .clk(clk),
        .reset(reset),
        .red(red),
        .green(green),
        .yellow(yellow)
    );

    // generate clock (period = 10 time units)
    always #5 clk = ~clk;

    initial begin
        clk = 0;
        reset = 1;    // apply reset
        #10 reset = 0; // release reset

        $display("Traffic Light Simulation Start");
        repeat (10) begin
            #10 $display("t=%0t | R=%b G=%b Y=%b", $time, red, green, yellow);
        end

        $finish;
    end

endmodule
