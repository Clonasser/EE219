`define VLEN            512
`define SEW             64
// `define SEW             32
`define LMUL            1
`define VLMAX           (`VLEN/`SEW) * `LMUL

`define VINST_BUS       31:0
`define SREG_BUS        63:0
// `define SREG_BUS        31:0
`define SREG_ADDR_BUS   4:0

`define VREG_WIDTH      `VLEN
`define VREG_BUS        `VLEN-1 : 0
`define VREG_ADDR_BUS   4  : 0
`define VREG_ADDR_WIDTH 5

`define VMEM_ADDR_BUS   63 : 0
// `define VMEM_ADDR_BUS   31 : 0
`define VMEM_DATA_BUS   `VLEN-1 : 0

`define VRAM_ADDR_WIDTH 64
`define VRAM_ADDR_BUS   63 : 0
// `define VRAM_ADDR_BUS   31 : 0
`define VRAM_DATA_BUS   `VLEN-1 : 0

`define ALU_OP_BUS      7  : 0

`define VALU_OP_NOP     8'b1000_0000
`define VALU_OP_ADD     8'b1000_0001
`define VALU_OP_MUL     8'b1000_0010
`define VALU_OP_MAC     8'b1000_0011// self-def operation 
`define VALU_OP_SUM     8'b1000_1000// self-def operation 
`define VALU_OP_SUS     8'b1000_1001// self-def operation 
`define VALU_OP_SUP     8'b1000_1011// self-def operation 

`define OPCODE_VL       7'b000_0111 
`define OPCODE_VS       7'b010_0111 
`define OPCODE_VV       7'b101_0111 

`define WIDTH_VSE32     3'b110
`define WIDTH_VLE32     3'b110
`define FUNCT3_IVV      3'b000
`define FUNCT3_IVI      3'b011
`define FUNCT3_IVX      3'b100



`define FUNCT6_VLE32    6'b00_0000
`define FUNCT6_VSE32    6'b00_0000
`define FUNCT6_VADD     6'b00_0000
`define FUNCT6_VMUL     6'b10_0100
`define FUNCT6_VMAC     6'b00_0001// self-def operation 
`define FUNCT6_VSUM     6'b00_0011// self-def operation 
`define FUNCT6_VSUS     6'b00_0111// self-def operation 
`define FUNCT6_VLE8     6'b00_0001// self-def operation 
`define FUNCT6_VSUP     6'b00_1111// self-def operation 