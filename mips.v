`include"define.v"
`timescale 1ns / 1ns
module mips(
    input clk,
    input reset
    );
    
   //IF
   wire [31:0] instr,pc,readdata;
	//IF_ID
   wire      IF_ID_den;
   wire [31:0] instr_D,pc4_D;
   //ID
   wire [31:0] next_pc,npcOut,extOut,RD1,RD2;
   wire [1:0]  PCSel;
   wire       npcOp,extOp,cmpResult;
   wire [3:0] cmpOp;
	//ID_EX
   wire       IR_E_Clear,cmpResult_E;
   wire [31:0] instr_E,pc8_E,rs_E,rt_E,ext_E;
	//EX
   wire [31:0] ALUrdA,ALUrdB,ALUOut,RDHI,RDLO,EXOut;
   wire        ASel,BSel,start,mulWe,busy,overflow;
   wire [3:0]  ALUOp;
   wire [1:0]  ALUSel,mulOp,HiLo;
   //EX_MEM
	wire        cmpResult_M;
   wire [31:0] instr_M,pc8_M,rt_M,ALUOut_M,rData;
   //MEM
   wire       memWr;
   wire [1:0] BEextOp;
   wire [3:0] BE;
   //MEM_WB
	wire        cmpResult_W;
   wire [31:0] instr_W,pc8_W,ALUOut_W,rData_W,rt_W,wDataReg_W;
   wire [4:0]  wrRegNu_W;
	//WB
   wire [31:0] WBextOut,WBextOut1;
   wire [1:0]  WDSel,WRSel,lop;
   wire [2:0]  WBextOp;
   wire        regWr;
   //Foward Unit and stall
	wire [2:0]  FowardRSD,FowardRTD;
   wire [1:0]  FowardRSE,FowardRTE; //foward signals
   wire        FowardRTM,stall;
   wire [31:0] FDRSD,FDRTD,FDRSEE,FDRTE,FDRTM; //foward data 

  
  
	 
	 
	 
  //function unit
  HazardUnit hazadu(.instr_D(instr_D),
                .instr_E(instr_E),
					 .instr_M(instr_M),
					 .instr_W(instr_W),
					 .cmpResult_M(cmpResult_M),
					 .cmpResult_W(cmpResult_W),
					 .FowardRSD(FowardRSD),
					 .FowardRTD(FowardRTD),
					 .FowardRSE(FowardRSE),
					 .FowardRTE(FowardRTE),
					 .FowardRTM(FowardRTM)
					 );
  StallUnit stallu(.instr_D(instr_D),
                .instr_E(instr_E),
					 .instr_M(instr_M),
					 .busy(busy),
					 .start(start),
					 .stall(stall)
                );					 
  //IF
  PC pcreg(.clk(clk),
       .reset(reset),
       .denPC(stall),
		 .dIn(next_pc),
		 .dOut(pc)
       );
		 
  Imem imem(.Ad(pc),
           .dout(instr)
           );
  //IF_ID
  Reg IR_DReg(.clk(clk),
             .reset(reset),
				 .den(stall),
				 .dIn(instr),
				 .dOut(instr_D)
				 );
				 
  Reg PC4_DReg(.clk(clk),
              .reset(reset),
				  .den(stall),
				  .dIn(pc+32'b100),
				  .dOut(pc4_D)
				  );
  //ID
  Mux5 MFRSD(.d0(RD1),
            .d1(ALUOut_M),
            .d2(pc8_M),
				.d3(wDataReg_W),
				.d4(pc8_W),
				.sel(FowardRSD),
				.dout(FDRSD)
				);
  Mux5 MFRTD(.d0(RD2),
            .d1(ALUOut_M),
            .d2(pc8_M),
				.d3(wDataReg_W),
				.d4(pc8_W),
				.sel(FowardRTD),
				.dout(FDRTD)
				);
  RF1 rf(.rs(instr_D[`RS]),
       .rt(instr_D[`RT]),
       .wr(wrRegNu_W),
		 .wd(wDataReg_W),
		 .we(regWr),
		 .clk(clk),
		 .reset(reset),
		 .PC(pc8_W-32'b1000),
		 .rd1(RD1),
		 .rd2(RD2)
		 );
  EXT ext(.Imm(instr_D[15:0]),
         .ExtOp(extOp),
         .ImmOut(extOut)
         );
  CMP cmp(.a(FDRSD),
         .b(FDRTD),
			.cmpOp(cmpOp),
			.Result(cmpResult)
			);
  NPC npc(.PC4_D(pc4_D),		 	
         .Imm26(instr_D[25:0]),
			.NPCOp(npcOp),
			.next_pc(npcOut)
			);
  Mux4 PCMUX(.d0(pc+32'b100),
            .d1(npcOut),
            .d2(FDRSD),
				.d3(32'b0),
				.sel(PCSel[1:0]),
				.dout(next_pc)
				);
  Control_D control_D(.instr(instr_D[31:0]),
                     .cmpResult(cmpResult),
							.PCSel(PCSel),
							.npcOp(npcOp),
							.extOp(extOp),
							.cmpOp(cmpOp)
							);
  //ID_EX
  Reg IR_EReg(.clk(clk),
              .reset(reset||stall),
				  .den(1'b0),
				  .dIn(instr_D),
				  .dOut(instr_E)
				  );
  Reg PC8_EReg(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(pc4_D+32'b100),
				  .dOut(pc8_E)
				  );				  
  Reg RS_EReg(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(FDRSD),
				  .dOut(rs_E)
				  );
  Reg RT_EReg(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(FDRTD),
				  .dOut(rt_E)
				  );
  Reg extReg(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(extOut),
				  .dOut(ext_E)
				  );
  Reg CMPResultReg_E(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(cmpResult),
				  .dOut(cmpResult_E)
				  );
  //EX
  Mux4 MFRSE(.d0(rs_E),
            .d1(ALUOut_M),
            .d2(pc8_M),
				.d3(wDataReg_W),
				.sel(FowardRSE),
				.dout(FDRSEE)
				);
  Mux4 MFRTE(.d0(rt_E),
            .d1(ALUOut_M),
            .d2(pc8_M),
				.d3(wDataReg_W),
				.sel(FowardRTE),
				.dout(FDRTE)
				);
  Control_E control_E(.instr(instr_E[31:0]),
                     .ALUOp(ALUOp),
							.ASel(ASel),
							.BSel(BSel),
							.start(start),
							.mulWe(mulWe),
							.HiLo(HiLo),
							.ALUSel(ALUSel),
							.mulOp(mulOp)
							);
  Mux2 aluSrcBMux(.d0(FDRTE),
                 .d1(ext_E),
					  .sel(BSel),
					  .dout(ALUrdB)
                 );
  Mux2 aluSrcAMux(.d0(FDRSEE),
                 .d1({27'b0,instr_E[`SHIFT]}),
					  .sel(ASel),
					  .dout(ALUrdA)
                 );  
  ALU alu(.a(ALUrdA),
         .b(ALUrdB),
			.ALUOp(ALUOp),
			.ALUOut(ALUOut),
			.instr(instr_E)
			);
  Mux4 aluMux(.d0(ALUOut),
            .d1(32'b0),
            .d2(RDLO),
				.d3(RDHI),
				.sel(ALUSel),
				.dout(EXOut)
				);
  MulDiv muldiv(.a(FDRSEE),
         .b(FDRTE),
			.clk(clk),
			.reset(reset),
			.start(start),
			.we(mulWe),
			.HiLo(HiLo),
			.MulOp(mulOp),
			.busy(busy),
			.HI(RDHI),
			.LO(RDLO)
			);
  //EX_MEM
  Reg IR_MReg(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(instr_E),
				  .dOut(instr_M)
				  );
  Reg PC8_MReg(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(pc8_E),
				  .dOut(pc8_M)
				  );
  Reg RT_MReg(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(FDRTE),
				  .dOut(rt_M)
				  );
  Reg ALUOutReg_M(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(EXOut),
				  .dOut(ALUOut_M)
				  );
  Reg CMPResultReg_M(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(cmpResult_E),
				  .dOut(cmpResult_M)
				  );
  //MEM
  Mux2 MFRTM(.d0(rt_M),
             .d1(wDataReg_W),
			    .sel(FowardRTM),
				 .dout(FDRTM)
             );
  Control_M control_m(.instr(instr_M),
                     .memWr(memWr),
							.BEextOp(BEextOp)
							);
  BEext beext(.addr(ALUOut_M[1:0]),
             .BEextOp(BEextOp),
				 .BE(BE)
				 );
  DM dm(.clk(clk),
       .we(memWr),
		 .reset(reset),
		 .PC(pc8_M-32'b1000),
		 .Ad(ALUOut_M),
		 .BE(BE),
		 .din(FDRTM),
		 .dout(rData)
		 );
   
  //MEM_WB
  Reg IR_WReg(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(instr_M),
				  .dOut(instr_W)
				  );
  Reg RT_WReg(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(FDRTM),
				  .dOut(rt_W)
				  );
  Reg PC8_WReg(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(pc8_M),
				  .dOut(pc8_W)
				  );
  Reg ALUOutReg_W(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(ALUOut_M),
				  .dOut(ALUOut_W)
				  );
  Reg rDataReg(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(rData),
				  .dOut(rData_W)
				  );
  Reg CMPResultReg_W(.clk(clk),
              .reset(reset),
				  .den(1'b0),
				  .dIn(cmpResult_M),
				  .dOut(cmpResult_W)
				  );
  //WB
  Control_W control_w(.instr(instr_W),
                     .cmpResult_W(cmpResult_W),
							.WRSel(WRSel),
							.WDSel(WDSel),
							.WBextOp(WBextOp),
							.lop(lop),
							.regWr(regWr)
							);
  WBext wbext(.addr(ALUOut_W[1:0]),
             .din(rData_W),
				 .WBextOp(WBextOp),
				 .dout(WBextOut1)
				 );
  lblr LBLR(.rt_W(rt_W),
             .WBextOut1(WBextOut1),
				 .Op(lop),
				 .WBextOut(WBextOut)
				 );   
  Mux4r wrRegMux(.d0(instr_W[`RT]),
            .d1(instr_W[`RD]),
            .d2(5'h1f),
				.d3(5'b0),
				.sel(WRSel),
				.dout(wrRegNu_W)
				);
  Mux4 wrDataRegMux(.d0(ALUOut_W),
            .d1(WBextOut),
            .d2(pc8_W),
				.d3(32'b0),
				.sel(WDSel),
				.dout(wDataReg_W)
				);
endmodule
