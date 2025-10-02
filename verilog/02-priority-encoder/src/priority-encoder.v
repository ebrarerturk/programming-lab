// 4-to-2 Priority Encoder
// If multiple inputs are high, the highest index wins.

module priority_encoder(
    input  [3:0] in,
    output reg [1:0] out,
    output reg valid
);

    always @(*) begin
        valid = 1; // assume valid unless nothing is set
        casez (in)
            4'b1???: out = 2'b11; // if in[3] is 1
            4'b01??: out = 2'b10; // if in[2] is 1
            4'b001?: out = 2'b01; // if in[1] is 1
            4'b0001: out = 2'b00; // if in[0] is 1
            default: begin
                out = 2'b00;
                valid = 0; // no inputs active
            end
        endcase
    end

endmodule
