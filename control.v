`include"define.v"

module Control_D(
    input [31:0] instr,
	 input cmpResult,
	 output reg [1:0] PCSel,
	 output reg npcOp,
	 output reg extOp,
	 output reg [3:0] cmpOp
    );
    
	 always @* begin
	     //PCSel npcOp
	     if((`BEQ || `BNE || `BLEZ || `BGTZ || `BLTZ || `BGEZ || `BGEZAL) && cmpResult)
          begin
             PCSel <= 2'b01;
             npcOp <= 1'b0;
          end
        else if(`J || `JAL) 
          begin
             PCSel <= 2'b01;
             npcOp <= 1'b1;
          end
        else if(`JR || `JALR)
          PCSel <= 2'b10;
        else //except Branch and Jump
          PCSel <= 2'b0;
        
        //extOp
        if(`LB || `LBU || `LH || `LHU || `LW || `LWL || `LWR || `SB || `SH || `SW || `ADDI || `ADDIU || `SLTI || `SLTIU)
          extOp <= 1'b1;
        else
          extOp <= 1'b0;
        //cmpOp
        if(`BEQ)
          cmpOp = 4'b0000;
        else if(`BNE)
          cmpOp = 4'b0001;
        else if(`BGEZ || `BGEZAL)
          cmpOp = 4'b0100;
        else if(`BGTZ)
          cmpOp = 4'b0101;
        else if(`BLEZ)
          cmpOp = 4'b0110;
        else if(`BLTZ)
          cmpOp = 4'b0111;
        else if(`MOVZ)
          cmpOp = 4'b1000;		  
	 end

endmodule//D



module Control_E(
     input [31:0] instr,
	  output reg [3:0] ALUOp,
	  output reg ASel,
	  output reg BSel,
	  output reg start,mulWe,
	  output reg [1:0] HiLo,
	  output reg [1:0] ALUSel,mulOp
    );
   
	always @*
   begin
      //handle ALUOp
      if(`LUI)
        ALUOp = 4'b0010;
      else if(`SUB || `SUBU)
        ALUOp = 4'b0001;
      else if(`AND || `ANDI)
        ALUOp = 4'b0100;
      else if(`OR || `ORI)
        ALUOp = 4'b0101;
      else if(`XOR || `XORI)
        ALUOp = 4'b0110;
      else if(`NOR)
        ALUOp = 4'b0111;
      else if(`SLL || `SLLV)
        ALUOp = 4'b1000;
      else if(`SRL || `SRLV)
        ALUOp = 4'b1010;
      else if(`SRA || `SRAV)
        ALUOp = 4'b1011;
      else if(`SLT || `SLTI)
        ALUOp = 4'b1100;
      else if(`SLTU || `SLTIU)
        ALUOp = 4'b1101;
      else //use add
        ALUOp = 4'b0000;

      //handle ASel and BSel
      if(`SLL || `SRL || `SRA)
        ASel = 2'b01;
      else
        ASel = 2'b00;
      if(`LB || `LBU || `LH || `LHU || `LW || `LWL || `LWR || `SB || `SH || `SW || `ADDI || `ADDIU || `ANDI || `ORI || `XORI || `LUI || `SLTI || `SLTIU)
        BSel = 2'b01;
      else
        BSel = 2'b00;
      //handle start and MulOp
      if(`MULT || `MULTU || `DIV || `DIVU)
        start = 1;
      else
        start = 0;
      if(`MULTU)
        mulOp = 2'b00;
      else if(`MULT)
        mulOp = 2'b01;
      else if(`DIVU)
        mulOp = 2'b10;
      else if(`DIV)
        mulOp = 2'b11;
      //handle HiLo and mulWe
      if(`MTHI)
        begin
           mulWe = 1;
           HiLo = 2'b01;
        end
      else if(`MTLO)
        begin
           mulWe = 1;
           HiLo = 2'b00;
        end
		else if(`MADD)
		  begin
		     mulWe = 1;
			  HiLo = 2'b10;
		  end
      else
        mulWe = 0;
      //handle ALUSel
      if(`MFHI)
        ALUSel = 2'b11;
      else if(`MFLO)
        ALUSel = 2'b10;
      else
        ALUSel = 2'b00;
   end
endmodule//E



module Control_M(
     input [31:0] instr,
	  output reg memWr,
	  output reg [1:0] BEextOp
    );
    
 always @* begin
   if(`SB || `SH || `SW)
     memWr = 1;
   else
     memWr = 0;

   if(`SH)
     BEextOp = 2'b10;
   else if(`SB)
     BEextOp = 2'b11;
   else
     BEextOp = 2'b00;
 end 

endmodule//M



module Control_W(
     input [31:0] instr,
	  input cmpResult_W,
	  output reg [1:0] WRSel,
	  output reg [1:0] WDSel,
	  output reg [2:0] WBextOp,
	  output reg [1:0] lop,
	  output reg regWr
    );

   always @* begin
       if(`LBU)
         WBextOp = 3'b001;
       else if(`LB)
         WBextOp = 3'b010;
       else if(`LHU)
         WBextOp = 3'b011;
       else if(`LH)
         WBextOp = 3'b100;
       else
         WBextOp = 3'b000;

       if(`ADD || `ADDU || `SUB || `SUBU || `SLT || `SLTU || `SLL || `SRL || `SRA || `SLLV || `SRLV || `SRAV || `AND || `OR || `XOR || `NOR  || `MFHI || `MFLO || (`MOVZ && cmpResult_W)) begin//r-r cal
                         regWr <= 1'b1;
                         WRSel <= 2'b01;//RD
                         WDSel <= 2'b00;//ALU
       end
       else if(`JAL || (`BGEZAL && cmpResult_W)) begin  
              regWr <= 1'b1;
              WRSel <= 2'b10;//1f
              WDSel <= 2'b10;//pc8_W
       end
       else if(`JALR) begin                      
              regWr <= 1'b1;
              WRSel <= 2'b01;//rd
              WDSel <= 2'b10;//pc8_W
       end
       else if(`LB || `LBU || `LH || `LHU || `LW || `LWL || `LWR) begin//load                    
            regWr <= 1'b1;
            WRSel <= 2'b00;//rt
            WDSel <= 2'b01; //rdata
       end
       else if(`ADDI || `ADDIU || `ANDI || `ORI || `XORI || `LUI || `SLTI || `SLTIU) begin//r-i cal
            regWr <= 1'b1;
            WRSel <= 2'b00;//rt
            WDSel <= 2'b00;//ALU
       end
       else begin//default
            regWr <= 1'b0;
            WRSel <= 2'b00;
            WDSel <= 2'b00;
       end
       
       if(`LWL)
         lop <= 2'b01;
       else if(`LWR)
         lop <= 2'b10;
       else
         lop <= 2'b00;		 		 
   end

endmodule//W
