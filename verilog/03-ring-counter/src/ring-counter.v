// 4-bit Ring Counter
// Circulates a single '1' through the 4-bit output

module ring_counter(
    input clk,          // clock signal
    input reset,        // reset signal
    output reg [3:0] out
);

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            out <= 4'b0001;        // reset -> start with 0001
        end else begin
            out <= {out[2:0], out[3]}; // shift left and wrap around
        end
    end

endmodule

