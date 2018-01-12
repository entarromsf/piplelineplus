module MulDiv(
    input [31:0] a,
    input [31:0] b,
    input clk,
    input reset,
    input start,
    input we,
    input [1:0] HiLo,
    input [1:0] MulOp,
    output reg busy,
    output reg [31:0] HI,
    output reg [31:0] LO,
	 output [3:0] zhou,
	 output [31:0] att,btt
    );
   reg [3:0] count;
	reg [31:0] at,bt;
	reg [63:0] temp;
	assign zhou = count;
	assign att = at;
	assign btt = bt;
   always @(posedge clk)
     begin
        if(reset)
          begin
             HI = 32'b0;
             LO = 32'b0;
             count = 0;
             busy = 0;
          end
        if(start)
          begin
             if(MulOp == 2'b00 || MulOp == 2'b01)
               count = 5;
             else
               count = 10;
				 at = a;
				 bt = b;
             busy = 1;
          end
		  
		  if(we)
          if(HiLo == 2'b01)
            HI = a;
          else if(HiLo == 2'b00)
            LO = a;
			 else if(HiLo == 2'b10) begin
			   temp = (HI || LO) + (a * b);
				{HI,LO} = temp;
			 end
        else if(count == 1)
          begin
             if(MulOp == 2'b00)//multu
						{HI,LO} = at * bt;					
             else if(MulOp == 2'b01) //mult
               {HI,LO} = $signed(at)*$signed(bt);
             else if(MulOp == 2'b10) //divu
               begin
					  if(bt != 0) begin
                  HI = at % bt;
                  LO = at / bt;
					  end
               end
             else if(MulOp == 2'b11) //div
               begin
					   if(bt != 0) begin
                  HI = $signed(at) % $signed(bt);
                  LO = $signed(at) / $signed(bt);
						end
               end
          end // if (count == 1)
        if(count)
          count = count - 4'b1;
        
        if(count)
          busy = 1;
        else
          busy = 0;		  
     end
endmodule
