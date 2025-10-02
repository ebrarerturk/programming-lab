// Testbench for 4-to-2 Priority Encoder

module test_priority_encoder;
    reg  [3:0] in;
    wire [1:0] out;
    wire valid;

    // Instantiate the design
    priority_encoder dut(.in(in), .out(out), .valid(valid));

    initial begin
        $display("Priority Encoder Simulation");

        in = 4'b0000; #5 $display("in=%b -> out=%b valid=%b", in, out, valid);
        in = 4'b0001; #5 $display("in=%b -> out=%b valid=%b", in, out, valid);
        in = 4'b0011; #5 $display("in=%b -> out=%b valid=%b", in, out, valid);
        in = 4'b1111; #5 $display("in=%b -> out=%b valid=%b", in, out, valid);

        $finish;
    end
endmodule
