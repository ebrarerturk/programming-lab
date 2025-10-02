module  led_shifter(
  input clk,
  output reg [7:0] leds );
  
  always @(posedge clk) begin
    if (leds == 8'b10000000)
      leds<=8'b00000001;
    else
      leds<=leds<<1; //shift to left
  end
  
  initial begin
    leds=8'b00000001;
  end
endmodule
