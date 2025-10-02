// Simple Traffic Light FSM
// States: RED -> GREEN -> YELLOW -> RED ...

module traffic_light(
    input clk,         // clock signal
    input reset,       // reset signal
    output reg red,
    output reg green,
    output reg yellow
);

    // state encoding (numbers represent each state)
    reg [1:0] state;

    // state values
    parameter S_RED    = 2'b00;
    parameter S_GREEN  = 2'b01;
    parameter S_YELLOW = 2'b10;

    // state register
    always @(posedge clk or posedge reset) begin
        if (reset)
            state <= S_RED;        // start in RED state
        else begin
            case (state)
                S_RED:    state <= S_GREEN;
                S_GREEN:  state <= S_YELLOW;
                S_YELLOW: state <= S_RED;
                default:  state <= S_RED;
            endcase
        end
    end

    // outputs based on state
    always @(*) begin
        red    = (state == S_RED);
        green  = (state == S_GREEN);
        yellow = (state == S_YELLOW);
    end

endmodule
