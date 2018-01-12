module BEext(
     input [1:0] addr,
	  input [1:0] BEextOp,
	  output reg [3:0] BE
    );
	 
	 always @* begin
	      if(BEextOp == 2'b10)//sh
			     casez(addr)
				     2'b0?: BE = 4'b0011;
					  2'b1?: BE = 4'b1100;
				  endcase
	      else if (BEextOp == 2'b11)//sb
			     case(addr)
				     2'b00: BE = 4'b0001;
					  2'b01: BE = 4'b0010;
					  2'b10: BE = 4'b0100;
					  2'b11: BE = 4'b1000;
			     endcase
	      else//sw
			     BE = 4'b1111;
    end

endmodule


module DM(
     input clk,
	  input we,
	  input reset,
	  input [31:0] PC,
	  input [31:0] Ad,
	  input [3:0] BE,
	  input [31:0] din,
	  output [31:0] dout
	  );
	  
	  reg [31:0] dm[4095:0];
	  reg [31:0] Adreg;
	  integer i = 0;
	  assign dout = dm[Ad[13:2]];
	  always @(posedge clk) begin
	      if (reset) begin
			   for (i = 0;i<4096;i=i+1) dm[i] = 0;
			end
	      else begin
	         if (we) begin
					 case(BE)
					    4'b0001: dm[Ad[13:2]] = {dout[31:8],din[7:0]};
						 4'b0010: dm[Ad[13:2]] = {dout[31:16],din[7:0],dout[7:0]};
						 4'b0100: dm[Ad[13:2]] = {dout[31:24],din[7:0],dout[15:0]};
						 4'b1000: dm[Ad[13:2]] = {din[7:0],dout[23:0]};
						 4'b0011: dm[Ad[13:2]] = {dout[31:16],din[15:0]};
						 4'b1100: dm[Ad[13:2]] = {din[15:0],dout[15:0]};
						 4'b1111: dm[Ad[13:2]] = din;
					 endcase
					 Adreg = {Ad[31:2],2'b0};
                $display("%d@%h: *%h <= %h",$time,PC,Adreg,dm[Ad[13:2]]);					 
			   end
	      end
	  end
endmodule

module WBext(
     input [1:0]addr,
	  input [31:0] din,
	  input [2:0] WBextOp,
	  output reg [31:0] dout
	  );
	  
	  always @* begin
	      if(WBextOp == 3'b001)//unsigned byte
            case(addr)
              2'b00: dout = {24'b0,din[7:0]};
              2'b01: dout = {24'b0,din[15:8]};
              2'b10: dout = {24'b0,din[23:16]};
              2'b11: dout = {24'b0,din[31:24]};
            endcase // case (addr)
          else if(WBextOp == 3'b010)//signed byte
            case(addr)
              2'b00: dout = {{24{din[7]}},din[7:0]};
              2'b01: dout = {{24{din[15]}},din[15:8]};
              2'b10: dout = {{24{din[23]}},din[23:16]};
              2'b11: dout = {{24{din[31]}},din[31:24]};
            endcase // case (addr)
          else if(WBextOp == 3'b011) //unsigned half
            casez(addr)
              2'b0?: dout = {16'b0,din[15:0]};
              2'b1?: dout = {16'b0,din[31:16]};
            endcase // casez (addr)
          else if(WBextOp == 3'b100) //signed half
            casez(addr)
              2'b0?: dout = {{16{din[15]}},din[15:0]};
              2'b1?: dout = {{16{din[31]}},din[31:16]};
            endcase // casez (addr)
          else //no ext
            dout = din;	  
     end

endmodule


