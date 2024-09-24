module v_execute (
    input                      clk,
    input                      rst,
    input [`ALU_OP_BUS]        valu_opcode_i,
    input [`VREG_BUS]          operand_v1_i,
    input [`VREG_BUS]          operand_v2_i,
    output reg [`VREG_BUS]     valu_result_o
);


genvar i ;

wire signed [31:0] sum_temp;
wire signed [31:0] sum_temp_shift;
wire signed [31:0] sum_temp_shift_t;
assign sum_temp = {operand_v1_i[31:    0]
                 + operand_v1_i[63:   32]
                 + operand_v1_i[95:   64]
                 + operand_v1_i[127:  96]
                 + operand_v1_i[159: 128]
                 + operand_v1_i[191: 160]
                 + operand_v1_i[223: 192]
                 + operand_v1_i[255: 224]
                 + operand_v1_i[287: 256]
                 + operand_v1_i[319: 288]
                 + operand_v1_i[351: 320]
                 + operand_v1_i[383: 352]
                 + operand_v1_i[415: 384]
                 + operand_v1_i[447: 416]
                 + operand_v1_i[479: 448]
                 + operand_v1_i[511: 480]}[31:0];
                 
assign sum_temp_shift_t = {{7{sum_temp[31]}},{sum_temp[31:7]}} + 1;
assign sum_temp_shift   = {sum_temp_shift_t[31],sum_temp_shift_t[31:1]};


// for(i=0; i < `VLMAX; i=i+1)begin
    always @(*) begin
        if(rst) begin
            valu_result_o = {`VREG_WIDTH{1'b0}};
        end
        else begin
            case( valu_opcode_i ) 
                `VALU_OP_NOP: begin 
                    valu_result_o = {`VREG_WIDTH{1'b0}} ;
                end 
                `VALU_OP_ADD: begin
                    valu_result_o[31:    0] = operand_v1_i[31:    0] + operand_v2_i[31:    0];
                    valu_result_o[63:   32] = operand_v1_i[63:   32] + operand_v2_i[63:   32];
                    valu_result_o[95:   64] = operand_v1_i[95:   64] + operand_v2_i[95:   64];
                    valu_result_o[127:  96] = operand_v1_i[127:  96] + operand_v2_i[127:  96];
                    valu_result_o[159: 128] = operand_v1_i[159: 128] + operand_v2_i[159: 128];
                    valu_result_o[191: 160] = operand_v1_i[191: 160] + operand_v2_i[191: 160];
                    valu_result_o[223: 192] = operand_v1_i[223: 192] + operand_v2_i[223: 192];
                    valu_result_o[255: 224] = operand_v1_i[255: 224] + operand_v2_i[255: 224];
                    valu_result_o[287: 256] = operand_v1_i[287: 256] + operand_v2_i[287: 256];
                    valu_result_o[319: 288] = operand_v1_i[319: 288] + operand_v2_i[319: 288];
                    valu_result_o[351: 320] = operand_v1_i[351: 320] + operand_v2_i[351: 320];
                    valu_result_o[383: 352] = operand_v1_i[383: 352] + operand_v2_i[383: 352];
                    valu_result_o[415: 384] = operand_v1_i[415: 384] + operand_v2_i[415: 384];
                    valu_result_o[447: 416] = operand_v1_i[447: 416] + operand_v2_i[447: 416];
                    valu_result_o[479: 448] = operand_v1_i[479: 448] + operand_v2_i[479: 448];
                    valu_result_o[511: 480] = operand_v1_i[511: 480] + operand_v2_i[511: 480];
                end
                `VALU_OP_MUL: begin
                    valu_result_o[31:    0] = operand_v1_i[31:    0] * operand_v2_i[31:    0];
                    valu_result_o[63:   32] = operand_v1_i[63:   32] * operand_v2_i[63:   32];
                    valu_result_o[95:   64] = operand_v1_i[95:   64] * operand_v2_i[95:   64];
                    valu_result_o[127:  96] = operand_v1_i[127:  96] * operand_v2_i[127:  96];                  
                    valu_result_o[159: 128] = operand_v1_i[159: 128] * operand_v2_i[159: 128];
                    valu_result_o[191: 160] = operand_v1_i[191: 160] * operand_v2_i[191: 160];
                    valu_result_o[223: 192] = operand_v1_i[223: 192] * operand_v2_i[223: 192];
                    valu_result_o[255: 224] = operand_v1_i[255: 224] * operand_v2_i[255: 224];
                    valu_result_o[287: 256] = operand_v1_i[287: 256] * operand_v2_i[287: 256];
                    valu_result_o[319: 288] = operand_v1_i[319: 288] * operand_v2_i[319: 288];
                    valu_result_o[351: 320] = operand_v1_i[351: 320] * operand_v2_i[351: 320];
                    valu_result_o[383: 352] = operand_v1_i[383: 352] * operand_v2_i[383: 352];
                    valu_result_o[415: 384] = operand_v1_i[415: 384] * operand_v2_i[415: 384];
                    valu_result_o[447: 416] = operand_v1_i[447: 416] * operand_v2_i[447: 416];
                    valu_result_o[479: 448] = operand_v1_i[479: 448] * operand_v2_i[479: 448];
                    valu_result_o[511: 480] = operand_v1_i[511: 480] * operand_v2_i[511: 480];
                end
                `VALU_OP_MAC: begin
                    valu_result_o[31:    0] = {operand_v1_i[31:    0] * operand_v2_i[31:    0]
                                             + operand_v1_i[63:   32] * operand_v2_i[63:   32]
                                             + operand_v1_i[95:   64] * operand_v2_i[95:   64]
                                             + operand_v1_i[127:  96] * operand_v2_i[127:  96]
                                             + operand_v1_i[159: 128] * operand_v2_i[159: 128]
                                             + operand_v1_i[191: 160] * operand_v2_i[191: 160]
                                             + operand_v1_i[223: 192] * operand_v2_i[223: 192]
                                             + operand_v1_i[255: 224] * operand_v2_i[255: 224]
                                             + operand_v1_i[287: 256] * operand_v2_i[287: 256]
                                             + operand_v1_i[319: 288] * operand_v2_i[319: 288]
                                             + operand_v1_i[351: 320] * operand_v2_i[351: 320]
                                             + operand_v1_i[383: 352] * operand_v2_i[383: 352] 
                                             + operand_v1_i[415: 384] * operand_v2_i[415: 384]
                                             + operand_v1_i[447: 416] * operand_v2_i[447: 416]
                                             + operand_v1_i[479: 448] * operand_v2_i[479: 448]
                                             + operand_v1_i[511: 480] * operand_v2_i[511: 480]}[31:0]; 
                    // valu_result_o[31:    0] = {operand_v1_i[31:    0] * operand_v2_i[31:    0]
                    //                          + operand_v1_i[63:   32] * operand_v2_i[63:   32]
                    //                          + operand_v1_i[95:   64] * operand_v2_i[95:   64]
                    //                          + operand_v1_i[127:  96] * operand_v2_i[127:  96]}
                    //                          +{operand_v1_i[159: 128] * operand_v2_i[159: 128]
                    //                          + operand_v1_i[191: 160] * operand_v2_i[191: 160]
                    //                          + operand_v1_i[223: 192] * operand_v2_i[223: 192]
                    //                          + operand_v1_i[255: 224] * operand_v2_i[255: 224]}
                    //                          +{operand_v1_i[287: 256] * operand_v2_i[287: 256]
                    //                          + operand_v1_i[319: 288] * operand_v2_i[319: 288]
                    //                          + operand_v1_i[351: 320] * operand_v2_i[351: 320]
                    //                          + operand_v1_i[383: 352] * operand_v2_i[383: 352]}
                    //                          +{operand_v1_i[415: 384] * operand_v2_i[415: 384]
                    //                          + operand_v1_i[447: 416] * operand_v2_i[447: 416]
                    //                          + operand_v1_i[479: 448] * operand_v2_i[479: 448]
                    //                          + operand_v1_i[511: 480] * operand_v2_i[511: 480]};
                    valu_result_o[511: 32]  = 0;
                end
                `VALU_OP_SUM: begin
                    // valu_result_o[31:    0] = sum_temp;
                    valu_result_o[31:    0] = (sum_temp > 127 ) ? 127      :
                                              (sum_temp < -128) ? -128     :
                                                                  sum_temp ;
                    // valu_result_o[31:    0] = {operand_v1_i[31:    0]
                                            //  + operand_v1_i[63:   32]
                                            //  + operand_v1_i[95:   64]
                                            //  + operand_v1_i[127:  96]
                                            //  + operand_v1_i[159: 128]
                                            //  + operand_v1_i[191: 160]
                                            //  + operand_v1_i[223: 192]
                                            //  + operand_v1_i[255: 224]
                                            //  + operand_v1_i[287: 256]
                                            //  + operand_v1_i[319: 288]
                                            //  + operand_v1_i[351: 320]
                                            //  + operand_v1_i[383: 352]
                                            //  + operand_v1_i[415: 384]
                                            //  + operand_v1_i[447: 416]
                                            //  + operand_v1_i[479: 448]
                                            //  + operand_v1_i[511: 480]}[31:0];
                    valu_result_o[511: 32]  = 0;
                end
                `VALU_OP_SUP: begin
                    // valu_result_o[31:    0] = sum_temp;
                    valu_result_o[31:    0] =    sum_temp ;
                    // valu_result_o[31:    0] = {operand_v1_i[31:    0]
                                            //  + operand_v1_i[63:   32]
                                            //  + operand_v1_i[95:   64]
                                            //  + operand_v1_i[127:  96]
                                            //  + operand_v1_i[159: 128]
                                            //  + operand_v1_i[191: 160]
                                            //  + operand_v1_i[223: 192]
                                            //  + operand_v1_i[255: 224]
                                            //  + operand_v1_i[287: 256]
                                            //  + operand_v1_i[319: 288]
                                            //  + operand_v1_i[351: 320]
                                            //  + operand_v1_i[383: 352]
                                            //  + operand_v1_i[415: 384]
                                            //  + operand_v1_i[447: 416]
                                            //  + operand_v1_i[479: 448]
                                            //  + operand_v1_i[511: 480]}[31:0];
                    valu_result_o[511: 32]  = 0;
                end
                `VALU_OP_SUS: begin
                    // valu_result_o[31:    0] = sum_temp;
                    valu_result_o[31:    0] = (sum_temp_shift > 127 ) ? 127      :
                                              (sum_temp_shift < -128) ? -128     :
                                                                        sum_temp_shift ;
                    valu_result_o[511: 32]  = 0;
                end
                default: begin
                    valu_result_o = {`VREG_WIDTH{1'b0}} ;
                end
            endcase
        end
    end
// end

// genvar i ;

// always @(*) begin
//     if(rst) begin
//         valu_result_o = {`VREG_WIDTH{1'b0}};
//     end
//     else begin
//         case( valu_opcode_i ) 
//             `VALU_OP_NOP: begin 
//                 valu_result_o = {`VREG_WIDTH{1'b0}} ;
//             end 
//             `VALU_OP_ADD: begin
//                 valu_result_o[63: 0]    = operand_v1_i[63: 0]     + operand_v2_i[63: 0]    ;
//                 valu_result_o[127: 64]  = operand_v1_i[127: 64]   + operand_v2_i[127: 64]  ;
//                 valu_result_o[191: 128] = operand_v1_i[191: 128]  + operand_v2_i[191: 128] ;
//                 valu_result_o[255: 192] = operand_v1_i[255: 192]  + operand_v2_i[255: 192] ;
//                 valu_result_o[329: 256] = operand_v1_i[329: 256]  + operand_v2_i[329: 256] ;
//                 valu_result_o[383: 320] = operand_v1_i[383: 320]  + operand_v2_i[383: 320] ;
//                 valu_result_o[447: 384] = operand_v1_i[447: 384]  + operand_v2_i[447: 384] ;
//                 valu_result_o[511: 448] = operand_v1_i[511: 448]  + operand_v2_i[511: 448] ;


//                 // generate
//                 //     for(i=0; i < `VLMAX; i=i+1)
//                 //     begin:OP_ADD
//                 //         valu_result_o[(i+1)*`SEW -1 -: `SEW ] = operand_v1_i[(i+1)*`SEW -1 -: `SEW ] + operand_v2_i[(i+1)*`SEW -1 -: `SEW ];
//                 //     end
//                 // endgenerate
                
//             end
//             `VALU_OP_MUL: begin
//                 valu_result_o[63: 0]    = operand_v1_i[63: 0]     * operand_v2_i[63: 0]    ;
//                 valu_result_o[127: 64]  = operand_v1_i[127: 64]   * operand_v2_i[127: 64]  ;
//                 valu_result_o[191: 128] = operand_v1_i[191: 128]  * operand_v2_i[191: 128] ;
//                 valu_result_o[255: 192] = operand_v1_i[255: 192]  * operand_v2_i[255: 192] ;
//                 valu_result_o[329: 256] = operand_v1_i[329: 256]  * operand_v2_i[329: 256] ;
//                 valu_result_o[383: 320] = operand_v1_i[383: 320]  * operand_v2_i[383: 320] ;
//                 valu_result_o[447: 384] = operand_v1_i[447: 384]  * operand_v2_i[447: 384] ;
//                 valu_result_o[511: 448] = operand_v1_i[511: 448]  * operand_v2_i[511: 448] ;
//                 // generat*
//                 //     for(i=0; i < `VLMAX; i=i+1)
//                 //     begin:OP_MUL
//                 //         valu_result_o[(i+1)*`SEW -1 -: `SEW ] = operand_v1_i[(i+1)*`SEW -1 -: `SEW ] * operand_v2_i[(i+1)*`SEW -1 -: `SEW ];
//                 //     end 
//                 // endgenerate
                
//             end
//             default: begin
//                 valu_result_o = {`VREG_WIDTH{1'b0}} ;
//             end
            
//         endcase
//     end
// end



endmodule

