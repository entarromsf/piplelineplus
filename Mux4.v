module Mux4 #(parameter width = 32)
(   input [width-1:0] d0,
    input [width-1:0] d1,
	 input [width-1:0] d2,
	 input [width-1:0] d3,
	 input [1:0] sel,
	 output [width-1:0] dout
    );
	 
	 assign dout = sel[1]?(sel[0]?d3:d2):(sel[0]?d1:d0);

endmodule

module Mux2 #(parameter width = 32)
(   input [width-1:0] d0,
    input [width-1:0] d1,
	 input sel,
	 output [width-1:0] dout
);

    assign dout = sel?d1:d0;

endmodule

