module test_led_shifter;
  reg clk;
  wire [7:0] leds;
  
  led_shifter dut(.clk(clk), .leds(leds));
  
  //producing clock
  always begin
    #5 clk= ~clk;
  end
  
  initial begin
    clk=0;
    
 //observation   
    $display("LED Shift Beginning");
    $monitor("Time: %0t | leds = %b", $time, leds);
    
    #100 $finish;
    
  end
endmodule
