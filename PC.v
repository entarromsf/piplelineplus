module PC(
    input clk,
    input reset,
    input denPC,
    input [31:0] dIn,
    output reg [31:0] dOut
    );
  
  always @(posedge clk) begin
       if(reset)
		    dOut <= 32'h00003000;
		 else
		    if(!denPC)
			    dOut <= dIn;
  end

endmodule
