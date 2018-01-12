module Mux5 #(parameter width = 32)
(   input [width-1:0] d0,
    input [width-1:0] d1,
	 input [width-1:0] d2,
	 input [width-1:0] d3,
	 input [width-1:0] d4,
	 input [2:0] sel,
	 output reg [width-1:0] dout
    );
	 
	 always @* begin
	    case(sel)
		    3'b000: dout <= d0;
			 3'b001: dout <= d1;
			 3'b010: dout <= d2;
			 3'b011: dout <= d3;
			 3'b100: dout <= d4;
	    endcase
	 end

endmodule
