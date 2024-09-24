// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub_0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub_0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBit(c+1047,"clock", false,-1);
    tracep->declBit(c+1048,"reset", false,-1);
    tracep->declBit(c+1047,"top clock", false,-1);
    tracep->declBit(c+1048,"top reset", false,-1);
    tracep->declBit(c+1049,"top inst_ena", false,-1);
    tracep->declBus(c+1,"top inst", false,-1, 31,0);
    tracep->declQuad(c+2,"top inst_addr", false,-1, 63,0);
    tracep->declBit(c+1084,"top ren_inst", false,-1);
    tracep->declQuad(c+1085,"top raddr_inst", false,-1, 63,0);
    tracep->declQuad(c+1087,"top rdata_inst", false,-1, 63,0);
    tracep->declBit(c+4,"top ram_r_ena", false,-1);
    tracep->declQuad(c+793,"top ram_r_addr", false,-1, 63,0);
    tracep->declQuad(c+795,"top ram_r_data", false,-1, 63,0);
    tracep->declBit(c+5,"top ram_w_ena", false,-1);
    tracep->declQuad(c+793,"top ram_w_addr", false,-1, 63,0);
    tracep->declQuad(c+687,"top ram_w_data", false,-1, 63,0);
    tracep->declQuad(c+797,"top ram_w_mask", false,-1, 63,0);
    {int i; for (i=0; i<32; i++) {
            tracep->declQuad(c+799+i*2,"top regs", true,(i+0), 63,0);}}
    tracep->declQuad(c+6,"top rom_rdata", false,-1, 63,0);
    tracep->declBit(c+863,"top vec_rs1_r_ena", false,-1);
    tracep->declBus(c+689,"top vec_rs1_r_addr", false,-1, 4,0);
    tracep->declQuad(c+864,"top vec_rs1_data", false,-1, 63,0);
    tracep->declBit(c+8,"top vram_r_ena", false,-1);
    tracep->declQuad(c+864,"top vram_r_addr", false,-1, 63,0);
    tracep->declArray(c+866,"top vram_r_data", false,-1, 511,0);
    tracep->declBit(c+9,"top vram_w_ena", false,-1);
    tracep->declQuad(c+864,"top vram_w_addr", false,-1, 63,0);
    tracep->declArray(c+882,"top vram_w_data", false,-1, 511,0);
    tracep->declArray(c+1089,"top vram_w_mask", false,-1, 511,0);
    tracep->declBit(c+1047,"top RV64I qRw", false,-1);
    tracep->declBit(c+1048,"top RV64I GFv", false,-1);
    tracep->declBit(c+1049,"top RV64I cBvbv8J", false,-1);
    tracep->declBus(c+1,"top RV64I tLAz", false,-1, 31,0);
    tracep->declQuad(c+2,"top RV64I M42mseGNC", false,-1, 63,0);
    tracep->declBit(c+4,"top RV64I kwLFq9ece", false,-1);
    tracep->declQuad(c+793,"top RV64I jyUGZ15cpD", false,-1, 63,0);
    tracep->declQuad(c+795,"top RV64I sZ8K3fVwEi", false,-1, 63,0);
    tracep->declBit(c+5,"top RV64I yMK6CRBBo", false,-1);
    tracep->declQuad(c+793,"top RV64I to7CMZaPKY", false,-1, 63,0);
    tracep->declQuad(c+687,"top RV64I iIaC58CiHx", false,-1, 63,0);
    tracep->declQuad(c+797,"top RV64I GtC0qmiUqL", false,-1, 63,0);
    {int i; for (i=0; i<32; i++) {
            tracep->declQuad(c+898+i*2,"top RV64I imsnW0", true,(i+0), 63,0);}}
    tracep->declBit(c+690,"top RV64I M0tlFLtwNj4", false,-1);
    tracep->declQuad(c+962,"top RV64I epavvrInwBl", false,-1, 63,0);
    tracep->declQuad(c+2,"top RV64I siZbFhceze", false,-1, 63,0);
    tracep->declQuad(c+1050,"top RV64I X5fLoFTh", false,-1, 63,0);
    tracep->declBit(c+964,"top RV64I plyN9CKEI", false,-1);
    tracep->declBus(c+10,"top RV64I kbB098u7Fq", false,-1, 4,0);
    tracep->declQuad(c+1050,"top RV64I zxkiTuCK4RD4", false,-1, 63,0);
    tracep->declBit(c+964,"top RV64I hUduYqCAo0XLk", false,-1);
    tracep->declBus(c+10,"top RV64I P9crpNurNqLiBT", false,-1, 4,0);
    tracep->declQuad(c+965,"top RV64I MrCY1P97", false,-1, 63,0);
    tracep->declBit(c+967,"top RV64I stsrseQpu", false,-1);
    tracep->declBus(c+11,"top RV64I Ofs9NJ36Pq", false,-1, 4,0);
    tracep->declQuad(c+968,"top RV64I BvitSgq1Hyw", false,-1, 63,0);
    tracep->declQuad(c+970,"top RV64I Lv5ku5dc93v", false,-1, 63,0);
    tracep->declBus(c+972,"top RV64I FsjRBjnjb1", false,-1, 7,0);
    tracep->declBit(c+12,"top RV64I Ai9EtdpBAt", false,-1);
    tracep->declQuad(c+793,"top RV64I Zsgxv3MTUv", false,-1, 63,0);
    tracep->declBit(c+13,"top RV64I D7oya5Igy", false,-1);
    tracep->declQuad(c+14,"top RV64I gY53pm6Uc1a5z", false,-1, 63,0);
    tracep->declBit(c+16,"top RV64I wWjUJ9g", false,-1);
    tracep->declQuad(c+17,"top RV64I BFWC5DLl4Ec", false,-1, 63,0);
    tracep->declBus(c+19,"top RV64I Yb5ekIkGnKG8c", false,-1, 2,0);
    tracep->declBit(c+4,"top RV64I a4SqTqUk3", false,-1);
    tracep->declQuad(c+691,"top RV64I VOpQv3szsL", false,-1, 63,0);
    tracep->declBit(c+5,"top RV64I NpNDeHiyF", false,-1);
    tracep->declQuad(c+693,"top RV64I Sw9ZCULOy5", false,-1, 63,0);
    tracep->declBit(c+20,"top RV64I z0MsdO", false,-1);
    tracep->declBit(c+4,"top RV64I P6wD5b", false,-1);
    tracep->declBus(c+21,"top RV64I ttyiClU", false,-1, 4,0);
    tracep->declBit(c+973,"top RV64I CP5BekSY", false,-1);
    tracep->declBus(c+974,"top RV64I fjN1GhT7w", false,-1, 4,0);
    tracep->declQuad(c+975,"top RV64I cSWijWYsS", false,-1, 63,0);
    tracep->declBit(c+1047,"top RV64I eD5A2ng0 qRw", false,-1);
    tracep->declBit(c+1048,"top RV64I eD5A2ng0 GFv", false,-1);
    tracep->declBit(c+690,"top RV64I eD5A2ng0 FlVzqaJLmQB9d", false,-1);
    tracep->declQuad(c+962,"top RV64I eD5A2ng0 ckxHDsjx2w8VQ", false,-1, 63,0);
    tracep->declQuad(c+2,"top RV64I eD5A2ng0 Z1IaB2AXzqhY", false,-1, 63,0);
    tracep->declBit(c+1049,"top RV64I eD5A2ng0 qovYvzF6D", false,-1);
    tracep->declQuad(c+2,"top RV64I eD5A2ng0 kXyFYs2fUMl", false,-1, 63,0);
    tracep->declQuad(c+22,"top RV64I eD5A2ng0 db", false,-1, 63,0);
    tracep->declQuad(c+2,"top RV64I eD5A2ng0 nlju", false,-1, 63,0);
    tracep->declBit(c+1048,"top RV64I s7o2FNmy GFv", false,-1);
    tracep->declBus(c+1,"top RV64I s7o2FNmy QQqE0R", false,-1, 31,0);
    tracep->declQuad(c+1050,"top RV64I s7o2FNmy nZgfwYMPis", false,-1, 63,0);
    tracep->declBit(c+964,"top RV64I s7o2FNmy Nsz4lbgOeJV", false,-1);
    tracep->declBus(c+10,"top RV64I s7o2FNmy wcqU5ueTTMKp", false,-1, 4,0);
    tracep->declQuad(c+965,"top RV64I s7o2FNmy f3HkVuZKqF", false,-1, 63,0);
    tracep->declBit(c+967,"top RV64I s7o2FNmy w36wdnIqkqw", false,-1);
    tracep->declBus(c+11,"top RV64I s7o2FNmy kRMWeuBKEmIC", false,-1, 4,0);
    tracep->declBus(c+972,"top RV64I s7o2FNmy b5FgibAO1U4M", false,-1, 7,0);
    tracep->declBit(c+12,"top RV64I s7o2FNmy MShTPjvautFo", false,-1);
    tracep->declQuad(c+968,"top RV64I s7o2FNmy LfmmAVsUOAh3l", false,-1, 63,0);
    tracep->declQuad(c+970,"top RV64I s7o2FNmy DOHla3yUfRhRC", false,-1, 63,0);
    tracep->declBit(c+13,"top RV64I s7o2FNmy MB7uIai8Vtn", false,-1);
    tracep->declQuad(c+14,"top RV64I s7o2FNmy Ij1WIf77YjMCk0P", false,-1, 63,0);
    tracep->declBit(c+16,"top RV64I s7o2FNmy jKbhLHOmf", false,-1);
    tracep->declQuad(c+17,"top RV64I s7o2FNmy gyJsJtTcJbZkb", false,-1, 63,0);
    tracep->declBus(c+19,"top RV64I s7o2FNmy Sllh1Ezp9IZIqYa", false,-1, 2,0);
    tracep->declBit(c+4,"top RV64I s7o2FNmy oJ9dSqzdtZM", false,-1);
    tracep->declBit(c+5,"top RV64I s7o2FNmy tWIXk2nzYYR", false,-1);
    tracep->declQuad(c+693,"top RV64I s7o2FNmy U8nHEbYumypl", false,-1, 63,0);
    tracep->declBit(c+20,"top RV64I s7o2FNmy BECXQ3iC", false,-1);
    tracep->declBit(c+4,"top RV64I s7o2FNmy pGYEoK97", false,-1);
    tracep->declBus(c+21,"top RV64I s7o2FNmy OA8Py3qa6", false,-1, 4,0);
    tracep->declBus(c+24,"top RV64I s7o2FNmy ZgK2w", false,-1, 31,0);
    tracep->declBus(c+25,"top RV64I s7o2FNmy R9GYY", false,-1, 20,0);
    tracep->declBus(c+26,"top RV64I s7o2FNmy bEPRS", false,-1, 12,0);
    tracep->declBus(c+27,"top RV64I s7o2FNmy ljuWe", false,-1, 11,0);
    tracep->declBus(c+28,"top RV64I s7o2FNmy ZWT7B", false,-1, 11,0);
    tracep->declBus(c+29,"top RV64I s7o2FNmy v212gv", false,-1, 6,0);
    tracep->declBus(c+30,"top RV64I s7o2FNmy pI8", false,-1, 4,0);
    tracep->declBus(c+31,"top RV64I s7o2FNmy z04", false,-1, 4,0);
    tracep->declBus(c+32,"top RV64I s7o2FNmy I5AJbs", false,-1, 2,0);
    tracep->declBus(c+33,"top RV64I s7o2FNmy nb", false,-1, 4,0);
    tracep->declBus(c+34,"top RV64I s7o2FNmy gfIyT7", false,-1, 6,0);
    tracep->declQuad(c+35,"top RV64I s7o2FNmy Sqk7XaBzon2D9v", false,-1, 63,0);
    tracep->declBit(c+37,"top RV64I s7o2FNmy GQAE9Cct", false,-1);
    tracep->declBit(c+38,"top RV64I s7o2FNmy QPShFtv4Dw", false,-1);
    tracep->declBit(c+39,"top RV64I s7o2FNmy TuCoUBCD", false,-1);
    tracep->declBit(c+40,"top RV64I s7o2FNmy ShXAdPB5O", false,-1);
    tracep->declBit(c+41,"top RV64I s7o2FNmy YWBp3rEd", false,-1);
    tracep->declBit(c+42,"top RV64I s7o2FNmy uP7s2O0a", false,-1);
    tracep->declBit(c+43,"top RV64I s7o2FNmy RA58HofI", false,-1);
    tracep->declBit(c+44,"top RV64I s7o2FNmy pX97QCtg", false,-1);
    tracep->declBit(c+45,"top RV64I s7o2FNmy IDE3hK2uz", false,-1);
    tracep->declBit(c+46,"top RV64I s7o2FNmy ycoCSReVj", false,-1);
    tracep->declBit(c+47,"top RV64I s7o2FNmy nIiCfXy", false,-1);
    tracep->declBit(c+48,"top RV64I s7o2FNmy INFMfFr", false,-1);
    tracep->declBit(c+49,"top RV64I s7o2FNmy OkydoJc", false,-1);
    tracep->declBit(c+50,"top RV64I s7o2FNmy G4mS4Qzt", false,-1);
    tracep->declBit(c+51,"top RV64I s7o2FNmy YdPZj3Dq", false,-1);
    tracep->declBit(c+52,"top RV64I s7o2FNmy C7aogzY", false,-1);
    tracep->declBit(c+53,"top RV64I s7o2FNmy voYw5no", false,-1);
    tracep->declBit(c+54,"top RV64I s7o2FNmy wWtUhx4", false,-1);
    tracep->declBit(c+55,"top RV64I s7o2FNmy SzgUUYWIJ", false,-1);
    tracep->declBit(c+56,"top RV64I s7o2FNmy u4KcONyV2", false,-1);
    tracep->declBit(c+57,"top RV64I s7o2FNmy GbT8XbTzEJ", false,-1);
    tracep->declBit(c+58,"top RV64I s7o2FNmy TYeqOMZzB", false,-1);
    tracep->declBit(c+59,"top RV64I s7o2FNmy hTsfETwt", false,-1);
    tracep->declBit(c+60,"top RV64I s7o2FNmy Pqvfr2zZE", false,-1);
    tracep->declBit(c+61,"top RV64I s7o2FNmy wa0Zzdgim", false,-1);
    tracep->declBit(c+62,"top RV64I s7o2FNmy QjcCGqv8V", false,-1);
    tracep->declBit(c+63,"top RV64I s7o2FNmy qMhxEPDIY", false,-1);
    tracep->declBit(c+64,"top RV64I s7o2FNmy wCAmo0T4", false,-1);
    tracep->declBit(c+65,"top RV64I s7o2FNmy nzJk0CYt", false,-1);
    tracep->declBit(c+66,"top RV64I s7o2FNmy KAZaki8Z", false,-1);
    tracep->declBit(c+67,"top RV64I s7o2FNmy GryHxQYb", false,-1);
    tracep->declBit(c+68,"top RV64I s7o2FNmy tM5lueYO1", false,-1);
    tracep->declBit(c+69,"top RV64I s7o2FNmy JxgCKb0r", false,-1);
    tracep->declBit(c+70,"top RV64I s7o2FNmy rFrUt3HA", false,-1);
    tracep->declBit(c+71,"top RV64I s7o2FNmy CsytHqHJ", false,-1);
    tracep->declBit(c+72,"top RV64I s7o2FNmy SVALFln", false,-1);
    tracep->declBit(c+73,"top RV64I s7o2FNmy yz2lRBz7", false,-1);
    tracep->declBit(c+74,"top RV64I s7o2FNmy WChG0j8I", false,-1);
    tracep->declBit(c+75,"top RV64I s7o2FNmy CzgHuUSI", false,-1);
    tracep->declBit(c+76,"top RV64I s7o2FNmy A66ucgr", false,-1);
    tracep->declBit(c+77,"top RV64I s7o2FNmy Ljqmq49", false,-1);
    tracep->declBit(c+78,"top RV64I s7o2FNmy mXoVztmUwG", false,-1);
    tracep->declBit(c+79,"top RV64I s7o2FNmy dWa2lYZtw5", false,-1);
    tracep->declBit(c+80,"top RV64I s7o2FNmy pngOwGCJUg", false,-1);
    tracep->declBit(c+81,"top RV64I s7o2FNmy CTHw1Tw4JF", false,-1);
    tracep->declBit(c+82,"top RV64I s7o2FNmy iBoxza85A", false,-1);
    tracep->declBit(c+83,"top RV64I s7o2FNmy sDefmLkP9", false,-1);
    tracep->declBit(c+84,"top RV64I s7o2FNmy tkNSPBbC4", false,-1);
    tracep->declBit(c+85,"top RV64I s7o2FNmy vkhuKAwC7", false,-1);
    tracep->declBit(c+86,"top RV64I s7o2FNmy LYUGKdPgW", false,-1);
    tracep->declBit(c+87,"top RV64I s7o2FNmy ULxdVmE2P", false,-1);
    tracep->declBit(c+88,"top RV64I s7o2FNmy lXMJdEC4Yj", false,-1);
    tracep->declBit(c+1047,"top RV64I yO7QPsT0y qRw", false,-1);
    tracep->declBit(c+1048,"top RV64I yO7QPsT0y GFv", false,-1);
    tracep->declBus(c+972,"top RV64I yO7QPsT0y QJ9hkSUr86g6", false,-1, 7,0);
    tracep->declBit(c+12,"top RV64I yO7QPsT0y Pfjw95PQlMmB", false,-1);
    tracep->declQuad(c+968,"top RV64I yO7QPsT0y rgW3lMDkqyNwd", false,-1, 63,0);
    tracep->declQuad(c+970,"top RV64I yO7QPsT0y fUFVvRbkqOOVT", false,-1, 63,0);
    tracep->declQuad(c+793,"top RV64I yO7QPsT0y hq6Uv7FRgdqu", false,-1, 63,0);
    tracep->declQuad(c+2,"top RV64I yO7QPsT0y dKWbtlnVzZKY", false,-1, 63,0);
    tracep->declBit(c+13,"top RV64I yO7QPsT0y IVQYajcaky2", false,-1);
    tracep->declQuad(c+14,"top RV64I yO7QPsT0y iBY1wF465kZc43I", false,-1, 63,0);
    tracep->declBit(c+16,"top RV64I yO7QPsT0y REAeHbGOa", false,-1);
    tracep->declQuad(c+17,"top RV64I yO7QPsT0y Fg0YJm19jg6un", false,-1, 63,0);
    tracep->declBit(c+690,"top RV64I yO7QPsT0y OUTEggu4pjvZO", false,-1);
    tracep->declQuad(c+962,"top RV64I yO7QPsT0y JDqNhAjgmujRj", false,-1, 63,0);
    tracep->declQuad(c+977,"top RV64I yO7QPsT0y ms6BV1DMBx", false,-1, 63,0);
    tracep->declBit(c+979,"top RV64I yO7QPsT0y Ha5GWqunguUc", false,-1);
    tracep->declBit(c+1048,"top RV64I jjI7ZAzN2 GFv", false,-1);
    tracep->declBus(c+19,"top RV64I jjI7ZAzN2 UQX1UO534Eueufy", false,-1, 2,0);
    tracep->declBit(c+4,"top RV64I jjI7ZAzN2 aTzikFmnw2L", false,-1);
    tracep->declQuad(c+793,"top RV64I jjI7ZAzN2 pfoWBIl3BSS8", false,-1, 63,0);
    tracep->declQuad(c+691,"top RV64I jjI7ZAzN2 RQrXFv01nm2Y", false,-1, 63,0);
    tracep->declBit(c+5,"top RV64I jjI7ZAzN2 SzK7f7TPjfs", false,-1);
    tracep->declQuad(c+793,"top RV64I jjI7ZAzN2 dRXdVXnEGkNt", false,-1, 63,0);
    tracep->declQuad(c+693,"top RV64I jjI7ZAzN2 EVQRdLZoqqwb", false,-1, 63,0);
    tracep->declBit(c+4,"top RV64I jjI7ZAzN2 doSBaROEalm", false,-1);
    tracep->declQuad(c+795,"top RV64I jjI7ZAzN2 yNuo2ExZSHTt", false,-1, 63,0);
    tracep->declQuad(c+793,"top RV64I jjI7ZAzN2 XRqKZqMadYIS", false,-1, 63,0);
    tracep->declBit(c+5,"top RV64I jjI7ZAzN2 fiSv7mavUEF", false,-1);
    tracep->declQuad(c+793,"top RV64I jjI7ZAzN2 ySkI99UlzaRl", false,-1, 63,0);
    tracep->declQuad(c+687,"top RV64I jjI7ZAzN2 uPLAeJWwH2VD", false,-1, 63,0);
    tracep->declQuad(c+797,"top RV64I jjI7ZAzN2 mO5xfkjIYekM", false,-1, 63,0);
    tracep->declQuad(c+795,"top RV64I jjI7ZAzN2 shKCUQ82VLz", false,-1, 63,0);
    tracep->declBus(c+980,"top RV64I jjI7ZAzN2 sKJju8Xgr7C", false,-1, 31,0);
    tracep->declBus(c+981,"top RV64I jjI7ZAzN2 bEdFnqpLQFY", false,-1, 15,0);
    tracep->declBus(c+982,"top RV64I jjI7ZAzN2 ZxFtpStHVWm", false,-1, 7,0);
    tracep->declQuad(c+797,"top RV64I jjI7ZAzN2 KzUS4LT1bsC", false,-1, 63,0);
    tracep->declQuad(c+1105,"top RV64I jjI7ZAzN2 gHxuxUy7K", false,-1, 63,0);
    tracep->declQuad(c+983,"top RV64I jjI7ZAzN2 iKFW5SVLk", false,-1, 63,0);
    tracep->declQuad(c+985,"top RV64I jjI7ZAzN2 bNoqmsE88", false,-1, 63,0);
    tracep->declQuad(c+987,"top RV64I jjI7ZAzN2 iMPPekqeo", false,-1, 63,0);
    tracep->declBit(c+1048,"top RV64I Kv7xLhcA GFv", false,-1);
    tracep->declBit(c+20,"top RV64I Kv7xLhcA WSDwRmyT", false,-1);
    tracep->declBus(c+21,"top RV64I Kv7xLhcA bqrnOOkRP", false,-1, 4,0);
    tracep->declBit(c+4,"top RV64I Kv7xLhcA KQRQqPG3", false,-1);
    tracep->declQuad(c+793,"top RV64I Kv7xLhcA o6ntSojFkw", false,-1, 63,0);
    tracep->declQuad(c+691,"top RV64I Kv7xLhcA j3R14S5oI4", false,-1, 63,0);
    tracep->declBit(c+973,"top RV64I Kv7xLhcA BECXQ3iC", false,-1);
    tracep->declBus(c+974,"top RV64I Kv7xLhcA OA8Py3qa6", false,-1, 4,0);
    tracep->declQuad(c+975,"top RV64I Kv7xLhcA O9OWRNtHh", false,-1, 63,0);
    tracep->declBit(c+1047,"top RV64I juyxmMf qRw", false,-1);
    tracep->declBit(c+1048,"top RV64I juyxmMf GFv", false,-1);
    tracep->declBus(c+974,"top RV64I juyxmMf tJPZEp4r", false,-1, 4,0);
    tracep->declQuad(c+975,"top RV64I juyxmMf UADGd6uM", false,-1, 63,0);
    tracep->declBit(c+973,"top RV64I juyxmMf jMvw26B", false,-1);
    tracep->declBit(c+964,"top RV64I juyxmMf iySWeb57", false,-1);
    tracep->declBus(c+10,"top RV64I juyxmMf qAHqrjuoy", false,-1, 4,0);
    tracep->declQuad(c+1050,"top RV64I juyxmMf Y6GtStlxd", false,-1, 63,0);
    tracep->declBit(c+967,"top RV64I juyxmMf iU9eTHOE", false,-1);
    tracep->declBus(c+11,"top RV64I juyxmMf cjwWUjvzA", false,-1, 4,0);
    tracep->declQuad(c+965,"top RV64I juyxmMf en8PtIPsi", false,-1, 63,0);
    {int i; for (i=0; i<32; i++) {
            tracep->declQuad(c+695+i*2,"top RV64I juyxmMf imsnW0", true,(i+0), 63,0);}}
    tracep->declBus(c+89,"top RV64I juyxmMf H", false,-1, 31,0);
    {int i; for (i=0; i<32; i++) {
            tracep->declQuad(c+90+i*2,"top RV64I juyxmMf oxMw", true,(i+0), 63,0);}}
    tracep->declBit(c+1047,"top ROM_INST clk", false,-1);
    tracep->declBit(c+1107,"top ROM_INST ren", false,-1);
    tracep->declQuad(c+154,"top ROM_INST rIdx", false,-1, 63,0);
    tracep->declQuad(c+6,"top ROM_INST rdata", false,-1, 63,0);
    tracep->declBit(c+1047,"top RAM clk", false,-1);
    tracep->declBit(c+4,"top RAM ren", false,-1);
    tracep->declQuad(c+989,"top RAM rIdx", false,-1, 63,0);
    tracep->declQuad(c+795,"top RAM rdata", false,-1, 63,0);
    tracep->declQuad(c+989,"top RAM wIdx", false,-1, 63,0);
    tracep->declQuad(c+687,"top RAM wdata", false,-1, 63,0);
    tracep->declQuad(c+797,"top RAM wmask", false,-1, 63,0);
    tracep->declBit(c+5,"top RAM wen", false,-1);
    tracep->declBit(c+1047,"top RV_VECTOR clk", false,-1);
    tracep->declBit(c+1048,"top RV_VECTOR rst", false,-1);
    tracep->declBus(c+1,"top RV_VECTOR inst", false,-1, 31,0);
    tracep->declQuad(c+864,"top RV_VECTOR vec_rs1_data", false,-1, 63,0);
    tracep->declBit(c+863,"top RV_VECTOR vec_rs1_r_ena", false,-1);
    tracep->declBus(c+689,"top RV_VECTOR vec_rs1_r_addr", false,-1, 4,0);
    tracep->declBit(c+8,"top RV_VECTOR vram_r_ena", false,-1);
    tracep->declQuad(c+864,"top RV_VECTOR vram_r_addr", false,-1, 63,0);
    tracep->declArray(c+866,"top RV_VECTOR vram_r_data", false,-1, 511,0);
    tracep->declBit(c+9,"top RV_VECTOR vram_w_ena", false,-1);
    tracep->declQuad(c+864,"top RV_VECTOR vram_w_addr", false,-1, 63,0);
    tracep->declArray(c+882,"top RV_VECTOR vram_w_data", false,-1, 511,0);
    tracep->declArray(c+1089,"top RV_VECTOR vram_w_mask", false,-1, 511,0);
    tracep->declBit(c+991,"top RV_VECTOR vs1_en", false,-1);
    tracep->declBus(c+759,"top RV_VECTOR vs1_addr", false,-1, 4,0);
    tracep->declArray(c+1052,"top RV_VECTOR vs1_dout", false,-1, 511,0);
    tracep->declBit(c+992,"top RV_VECTOR vs2_en", false,-1);
    tracep->declBus(c+760,"top RV_VECTOR vs2_addr", false,-1, 4,0);
    tracep->declArray(c+1068,"top RV_VECTOR vs2_data", false,-1, 511,0);
    tracep->declBus(c+993,"top RV_VECTOR valu_opcode", false,-1, 7,0);
    tracep->declArray(c+994,"top RV_VECTOR operand_v1", false,-1, 511,0);
    tracep->declArray(c+882,"top RV_VECTOR operand_v2", false,-1, 511,0);
    tracep->declBit(c+8,"top RV_VECTOR vmem_ren", false,-1);
    tracep->declBit(c+9,"top RV_VECTOR vmem_wen", false,-1);
    tracep->declQuad(c+864,"top RV_VECTOR vmem_addr", false,-1, 63,0);
    tracep->declArray(c+882,"top RV_VECTOR vmem_din", false,-1, 511,0);
    tracep->declArray(c+866,"top RV_VECTOR vmem_dout", false,-1, 511,0);
    tracep->declBit(c+156,"top RV_VECTOR vid_wb_en", false,-1);
    tracep->declBit(c+157,"top RV_VECTOR vid_wb_sel", false,-1);
    tracep->declBit(c+158,"top RV_VECTOR vid_wb_split", false,-1);
    tracep->declBus(c+159,"top RV_VECTOR vid_wb_addr", false,-1, 4,0);
    tracep->declArray(c+1010,"top RV_VECTOR valu_result", false,-1, 511,0);
    tracep->declBit(c+156,"top RV_VECTOR vwb_en", false,-1);
    tracep->declBus(c+159,"top RV_VECTOR vwb_addr", false,-1, 4,0);
    tracep->declArray(c+761,"top RV_VECTOR vwb_data", false,-1, 511,0);
    tracep->declQuad(c+864,"top RV_VECTOR vram_addr_o", false,-1, 63,0);
    tracep->declBit(c+1048,"top RV_VECTOR V_ID rst", false,-1);
    tracep->declBus(c+1,"top RV_VECTOR V_ID inst_i", false,-1, 31,0);
    tracep->declBit(c+863,"top RV_VECTOR V_ID rs1_en_o", false,-1);
    tracep->declBus(c+689,"top RV_VECTOR V_ID rs1_addr_o", false,-1, 4,0);
    tracep->declQuad(c+864,"top RV_VECTOR V_ID rs1_dout_i", false,-1, 63,0);
    tracep->declBit(c+991,"top RV_VECTOR V_ID vs1_en_o", false,-1);
    tracep->declBus(c+759,"top RV_VECTOR V_ID vs1_addr_o", false,-1, 4,0);
    tracep->declArray(c+1052,"top RV_VECTOR V_ID vs1_dout_i", false,-1, 511,0);
    tracep->declBit(c+992,"top RV_VECTOR V_ID vs2_en_o", false,-1);
    tracep->declBus(c+760,"top RV_VECTOR V_ID vs2_addr_o", false,-1, 4,0);
    tracep->declArray(c+1068,"top RV_VECTOR V_ID vs2_dout_i", false,-1, 511,0);
    tracep->declBus(c+993,"top RV_VECTOR V_ID valu_opcode_o", false,-1, 7,0);
    tracep->declArray(c+994,"top RV_VECTOR V_ID operand_v1_o", false,-1, 511,0);
    tracep->declArray(c+882,"top RV_VECTOR V_ID operand_v2_o", false,-1, 511,0);
    tracep->declBit(c+8,"top RV_VECTOR V_ID vmem_ren_o", false,-1);
    tracep->declBit(c+9,"top RV_VECTOR V_ID vmem_wen_o", false,-1);
    tracep->declQuad(c+864,"top RV_VECTOR V_ID vmem_addr_o", false,-1, 63,0);
    tracep->declArray(c+882,"top RV_VECTOR V_ID vmem_din_o", false,-1, 511,0);
    tracep->declBit(c+156,"top RV_VECTOR V_ID vid_wb_en_o", false,-1);
    tracep->declBit(c+157,"top RV_VECTOR V_ID vid_wb_sel_o", false,-1);
    tracep->declBit(c+158,"top RV_VECTOR V_ID vid_wb_split_o", false,-1);
    tracep->declBus(c+159,"top RV_VECTOR V_ID vid_wb_addr_o", false,-1, 4,0);
    tracep->declBus(c+160,"top RV_VECTOR V_ID funct6", false,-1, 5,0);
    tracep->declBit(c+161,"top RV_VECTOR V_ID vm", false,-1);
    tracep->declBus(c+30,"top RV_VECTOR V_ID rs2", false,-1, 4,0);
    tracep->declBus(c+31,"top RV_VECTOR V_ID imm", false,-1, 4,0);
    tracep->declBus(c+31,"top RV_VECTOR V_ID rs1", false,-1, 4,0);
    tracep->declBus(c+32,"top RV_VECTOR V_ID funct3", false,-1, 2,0);
    tracep->declBus(c+33,"top RV_VECTOR V_ID vd", false,-1, 4,0);
    tracep->declBus(c+34,"top RV_VECTOR V_ID opcode", false,-1, 6,0);
    tracep->declBit(c+162,"top RV_VECTOR V_ID inst_vle32_v", false,-1);
    tracep->declBit(c+9,"top RV_VECTOR V_ID inst_vse32_v", false,-1);
    tracep->declBit(c+163,"top RV_VECTOR V_ID inst_vadd_vv", false,-1);
    tracep->declBit(c+164,"top RV_VECTOR V_ID inst_vadd_vi", false,-1);
    tracep->declBit(c+165,"top RV_VECTOR V_ID inst_vadd_vx", false,-1);
    tracep->declBit(c+166,"top RV_VECTOR V_ID inst_vmul_vv", false,-1);
    tracep->declBit(c+167,"top RV_VECTOR V_ID inst_vmul_vi", false,-1);
    tracep->declBit(c+168,"top RV_VECTOR V_ID inst_vmul_vx", false,-1);
    tracep->declBit(c+169,"top RV_VECTOR V_ID inst_vmac_vv", false,-1);
    tracep->declBit(c+170,"top RV_VECTOR V_ID inst_vsum_vv", false,-1);
    tracep->declBit(c+171,"top RV_VECTOR V_ID inst_vsus_vv", false,-1);
    tracep->declBit(c+158,"top RV_VECTOR V_ID inst_vle8_v", false,-1);
    tracep->declBit(c+1108,"top RV_VECTOR V_ID inst_vsup_vv", false,-1);
    tracep->declQuad(c+172,"top RV_VECTOR V_ID imm_v", false,-1, 63,0);
    tracep->declBit(c+1047,"top RV_VECTOR V_ALU clk", false,-1);
    tracep->declBit(c+1048,"top RV_VECTOR V_ALU rst", false,-1);
    tracep->declBus(c+993,"top RV_VECTOR V_ALU valu_opcode_i", false,-1, 7,0);
    tracep->declArray(c+994,"top RV_VECTOR V_ALU operand_v1_i", false,-1, 511,0);
    tracep->declArray(c+882,"top RV_VECTOR V_ALU operand_v2_i", false,-1, 511,0);
    tracep->declArray(c+1010,"top RV_VECTOR V_ALU valu_result_o", false,-1, 511,0);
    tracep->declBus(c+1026,"top RV_VECTOR V_ALU sum_temp", false,-1, 31,0);
    tracep->declBus(c+1027,"top RV_VECTOR V_ALU sum_temp_shift", false,-1, 31,0);
    tracep->declBus(c+1028,"top RV_VECTOR V_ALU sum_temp_shift_t", false,-1, 31,0);
    tracep->declBit(c+8,"top RV_VECTOR V_MEM_ACCESS vmem_ren_i", false,-1);
    tracep->declBit(c+9,"top RV_VECTOR V_MEM_ACCESS vmem_wen_i", false,-1);
    tracep->declQuad(c+864,"top RV_VECTOR V_MEM_ACCESS vmem_addr_i", false,-1, 63,0);
    tracep->declArray(c+882,"top RV_VECTOR V_MEM_ACCESS vmem_din_i", false,-1, 511,0);
    tracep->declArray(c+866,"top RV_VECTOR V_MEM_ACCESS vmem_dout_o", false,-1, 511,0);
    tracep->declBit(c+8,"top RV_VECTOR V_MEM_ACCESS vram_ren_o", false,-1);
    tracep->declBit(c+9,"top RV_VECTOR V_MEM_ACCESS vram_wen_o", false,-1);
    tracep->declQuad(c+864,"top RV_VECTOR V_MEM_ACCESS vram_addr_o", false,-1, 63,0);
    tracep->declArray(c+1089,"top RV_VECTOR V_MEM_ACCESS vram_mask_o", false,-1, 511,0);
    tracep->declArray(c+882,"top RV_VECTOR V_MEM_ACCESS vram_din_o", false,-1, 511,0);
    tracep->declArray(c+866,"top RV_VECTOR V_MEM_ACCESS vram_dout_i", false,-1, 511,0);
    tracep->declBit(c+156,"top RV_VECTOR V_WB vid_wb_en_i", false,-1);
    tracep->declBit(c+157,"top RV_VECTOR V_WB vid_wb_sel_i", false,-1);
    tracep->declBit(c+158,"top RV_VECTOR V_WB vid_wb_split_i", false,-1);
    tracep->declBus(c+159,"top RV_VECTOR V_WB vid_wb_addr_i", false,-1, 4,0);
    tracep->declArray(c+1010,"top RV_VECTOR V_WB valu_result_i", false,-1, 511,0);
    tracep->declArray(c+866,"top RV_VECTOR V_WB vmem_result_i", false,-1, 511,0);
    tracep->declBit(c+156,"top RV_VECTOR V_WB vwb_en_o", false,-1);
    tracep->declBus(c+159,"top RV_VECTOR V_WB vwb_addr_o", false,-1, 4,0);
    tracep->declArray(c+761,"top RV_VECTOR V_WB vwb_data_o", false,-1, 511,0);
    tracep->declArray(c+777,"top RV_VECTOR V_WB vmem_temp", false,-1, 511,0);
    tracep->declArray(c+1029,"top RV_VECTOR V_WB vmem_split", false,-1, 511,0);
    tracep->declBit(c+1047,"top RV_VECTOR V_REGFILE clk", false,-1);
    tracep->declBit(c+1048,"top RV_VECTOR V_REGFILE rst", false,-1);
    tracep->declBit(c+156,"top RV_VECTOR V_REGFILE vwb_en_i", false,-1);
    tracep->declBus(c+159,"top RV_VECTOR V_REGFILE vwb_addr_i", false,-1, 4,0);
    tracep->declArray(c+761,"top RV_VECTOR V_REGFILE vwb_data_i", false,-1, 511,0);
    tracep->declBit(c+991,"top RV_VECTOR V_REGFILE vs1_en_i", false,-1);
    tracep->declBus(c+759,"top RV_VECTOR V_REGFILE vs1_addr_i", false,-1, 4,0);
    tracep->declArray(c+1052,"top RV_VECTOR V_REGFILE vs1_data_o", false,-1, 511,0);
    tracep->declBit(c+992,"top RV_VECTOR V_REGFILE vs2_en_i", false,-1);
    tracep->declBus(c+760,"top RV_VECTOR V_REGFILE vs2_addr_i", false,-1, 4,0);
    tracep->declArray(c+1068,"top RV_VECTOR V_REGFILE vs2_data_o", false,-1, 511,0);
    tracep->declBus(c+174,"top RV_VECTOR V_REGFILE i", false,-1, 31,0);
    {int i; for (i=0; i<32; i++) {
            tracep->declArray(c+175+i*16,"top RV_VECTOR V_REGFILE vregfile", true,(i+0), 511,0);}}
    tracep->declBit(c+1047,"top RAM_VECOTR clk", false,-1);
    tracep->declBit(c+8,"top RAM_VECOTR ren", false,-1);
    tracep->declQuad(c+1045,"top RAM_VECOTR rIdx", false,-1, 63,0);
    tracep->declArray(c+866,"top RAM_VECOTR rdata", false,-1, 511,0);
    tracep->declQuad(c+1045,"top RAM_VECOTR wIdx", false,-1, 63,0);
    tracep->declArray(c+882,"top RAM_VECOTR wdata", false,-1, 511,0);
    tracep->declArray(c+1089,"top RAM_VECOTR wmask", false,-1, 511,0);
    tracep->declBit(c+9,"top RAM_VECOTR wen", false,-1);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;
extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h8b2d9f06_0;

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    VlWide<16>/*511:0*/ __Vtemp_h43b11df6__0;
    VlWide<16>/*511:0*/ __Vtemp_ha7bd460c__1;
    VlWide<16>/*511:0*/ __Vtemp_h5ea47836__0;
    VlWide<16>/*511:0*/ __Vtemp_h88f380bf__0;
    // Body
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__inst),32);
    tracep->fullQData(oldp+2,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju),64);
    tracep->fullBit(oldp+4,(((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr))
                              ? 1U : 0U)));
    tracep->fullBit(oldp+5,((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                              ? 1U : 0U)));
    tracep->fullQData(oldp+6,(vlSelf->top__DOT__rom_rdata),64);
    tracep->fullBit(oldp+8,(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren));
    tracep->fullBit(oldp+9,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v));
    tracep->fullCData(oldp+10,(vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT),5);
    tracep->fullCData(oldp+11,((0x1fU & ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
                                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)) 
                                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)) 
                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)) 
                                            | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz) 
                                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj))) 
                                           | ((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))) 
                                          | ((((((((((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4) 
                                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt)) 
                                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z)) 
                                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb)) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1)) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ)) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln)) 
                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7)) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I)) 
                                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)) 
                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)) 
                                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)) 
                                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7)) 
                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW)))
                                          ? (0x1fU 
                                             & (vlSelf->top__DOT__inst 
                                                >> 0x14U))
                                          : (((0x6bU 
                                               == vlSelf->top__DOT__inst) 
                                              | (0x5007fU 
                                                 == vlSelf->top__DOT__inst))
                                              ? 0xaU
                                              : 0U)))),5);
    tracep->fullBit(oldp+12,((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG) 
                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)) 
                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)) 
                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)) 
                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5))));
    tracep->fullBit(oldp+13,((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)) 
                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)) 
                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)) 
                              | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz) 
                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj)))));
    tracep->fullQData(oldp+14,(vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z),64);
    tracep->fullBit(oldp+16,(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g));
    tracep->fullQData(oldp+17,((((0x6fU == (0x7fU & vlSelf->top__DOT__inst)) 
                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O))
                                 ? (((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY 
                                                            >> 0x14U))))) 
                                     << 0x15U) | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY)))
                                 : 0ULL)),64);
    tracep->fullCData(oldp+19,(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c),3);
    tracep->fullBit(oldp+20,((((((0x37U == (0x7fU & vlSelf->top__DOT__inst)) 
                                 | (0x17U == (0x7fU 
                                              & vlSelf->top__DOT__inst))) 
                                | (0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__inst))) 
                               | (((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr)) 
                                   | ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O) 
                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ)) 
                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2)) 
                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ)) 
                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB)) 
                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt)) 
                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE)) 
                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG))) 
                                  | ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim) 
                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V)) 
                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY)) 
                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)) 
                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg)) 
                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF)))) 
                              | ((((((((((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4) 
                                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt)) 
                                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z)) 
                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb)) 
                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1)) 
                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r)) 
                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA)) 
                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ)) 
                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln)) 
                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7)) 
                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I)) 
                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)) 
                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7)) 
                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW)))));
    tracep->fullCData(oldp+21,(vlSelf->top__DOT__RV64I__DOT__ttyiClU),5);
    tracep->fullQData(oldp+22,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db),64);
    tracep->fullIData(oldp+24,((0xfffff000U & vlSelf->top__DOT__inst)),32);
    tracep->fullIData(oldp+25,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY),21);
    tracep->fullSData(oldp+26,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__bEPRS),13);
    tracep->fullSData(oldp+27,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ljuWe),12);
    tracep->fullSData(oldp+28,((vlSelf->top__DOT__inst 
                                >> 0x14U)),12);
    tracep->fullCData(oldp+29,((vlSelf->top__DOT__inst 
                                >> 0x19U)),7);
    tracep->fullCData(oldp+30,((0x1fU & (vlSelf->top__DOT__inst 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+31,((0x1fU & (vlSelf->top__DOT__inst 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+32,((7U & (vlSelf->top__DOT__inst 
                                      >> 0xcU))),3);
    tracep->fullCData(oldp+33,((0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U))),5);
    tracep->fullCData(oldp+34,((0x7fU & vlSelf->top__DOT__inst)),7);
    tracep->fullQData(oldp+35,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Sqk7XaBzon2D9v),64);
    tracep->fullBit(oldp+37,((0x37U == (0x7fU & vlSelf->top__DOT__inst))));
    tracep->fullBit(oldp+38,((0x17U == (0x7fU & vlSelf->top__DOT__inst))));
    tracep->fullBit(oldp+39,((0x6fU == (0x7fU & vlSelf->top__DOT__inst))));
    tracep->fullBit(oldp+40,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O));
    tracep->fullBit(oldp+41,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd));
    tracep->fullBit(oldp+42,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a));
    tracep->fullBit(oldp+43,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI));
    tracep->fullBit(oldp+44,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg));
    tracep->fullBit(oldp+45,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz));
    tracep->fullBit(oldp+46,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj));
    tracep->fullBit(oldp+47,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy));
    tracep->fullBit(oldp+48,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr));
    tracep->fullBit(oldp+49,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc));
    tracep->fullBit(oldp+50,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt));
    tracep->fullBit(oldp+51,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq));
    tracep->fullBit(oldp+52,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY));
    tracep->fullBit(oldp+53,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no));
    tracep->fullBit(oldp+54,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4));
    tracep->fullBit(oldp+55,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ));
    tracep->fullBit(oldp+56,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2));
    tracep->fullBit(oldp+57,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ));
    tracep->fullBit(oldp+58,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB));
    tracep->fullBit(oldp+59,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt));
    tracep->fullBit(oldp+60,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE));
    tracep->fullBit(oldp+61,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim));
    tracep->fullBit(oldp+62,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V));
    tracep->fullBit(oldp+63,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY));
    tracep->fullBit(oldp+64,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4));
    tracep->fullBit(oldp+65,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt));
    tracep->fullBit(oldp+66,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z));
    tracep->fullBit(oldp+67,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb));
    tracep->fullBit(oldp+68,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1));
    tracep->fullBit(oldp+69,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r));
    tracep->fullBit(oldp+70,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA));
    tracep->fullBit(oldp+71,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ));
    tracep->fullBit(oldp+72,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln));
    tracep->fullBit(oldp+73,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7));
    tracep->fullBit(oldp+74,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I));
    tracep->fullBit(oldp+75,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI));
    tracep->fullBit(oldp+76,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr));
    tracep->fullBit(oldp+77,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49));
    tracep->fullBit(oldp+78,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG));
    tracep->fullBit(oldp+79,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5));
    tracep->fullBit(oldp+80,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg));
    tracep->fullBit(oldp+81,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF));
    tracep->fullBit(oldp+82,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A));
    tracep->fullBit(oldp+83,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9));
    tracep->fullBit(oldp+84,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4));
    tracep->fullBit(oldp+85,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7));
    tracep->fullBit(oldp+86,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW));
    tracep->fullBit(oldp+87,((0x6bU == vlSelf->top__DOT__inst)));
    tracep->fullBit(oldp+88,((0x5007fU == vlSelf->top__DOT__inst)));
    tracep->fullIData(oldp+89,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__H),32);
    tracep->fullQData(oldp+90,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0]),64);
    tracep->fullQData(oldp+92,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[1]),64);
    tracep->fullQData(oldp+94,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[2]),64);
    tracep->fullQData(oldp+96,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[3]),64);
    tracep->fullQData(oldp+98,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[4]),64);
    tracep->fullQData(oldp+100,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[5]),64);
    tracep->fullQData(oldp+102,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[6]),64);
    tracep->fullQData(oldp+104,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[7]),64);
    tracep->fullQData(oldp+106,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[8]),64);
    tracep->fullQData(oldp+108,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[9]),64);
    tracep->fullQData(oldp+110,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[10]),64);
    tracep->fullQData(oldp+112,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[11]),64);
    tracep->fullQData(oldp+114,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[12]),64);
    tracep->fullQData(oldp+116,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[13]),64);
    tracep->fullQData(oldp+118,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[14]),64);
    tracep->fullQData(oldp+120,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[15]),64);
    tracep->fullQData(oldp+122,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[16]),64);
    tracep->fullQData(oldp+124,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[17]),64);
    tracep->fullQData(oldp+126,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[18]),64);
    tracep->fullQData(oldp+128,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[19]),64);
    tracep->fullQData(oldp+130,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[20]),64);
    tracep->fullQData(oldp+132,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[21]),64);
    tracep->fullQData(oldp+134,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[22]),64);
    tracep->fullQData(oldp+136,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[23]),64);
    tracep->fullQData(oldp+138,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[24]),64);
    tracep->fullQData(oldp+140,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[25]),64);
    tracep->fullQData(oldp+142,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[26]),64);
    tracep->fullQData(oldp+144,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[27]),64);
    tracep->fullQData(oldp+146,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[28]),64);
    tracep->fullQData(oldp+148,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[29]),64);
    tracep->fullQData(oldp+150,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[30]),64);
    tracep->fullQData(oldp+152,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[31]),64);
    tracep->fullQData(oldp+154,(((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                  - 0x80000000ULL) 
                                 >> 3U)),64);
    tracep->fullBit(oldp+156,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en));
    tracep->fullBit(oldp+157,(((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle32_v) 
                               | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v))));
    tracep->fullBit(oldp+158,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v));
    tracep->fullCData(oldp+159,(((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en)
                                  ? (0x1fU & (vlSelf->top__DOT__inst 
                                              >> 7U))
                                  : 0U)),5);
    tracep->fullCData(oldp+160,((vlSelf->top__DOT__inst 
                                 >> 0x1aU)),6);
    tracep->fullBit(oldp+161,((1U & (vlSelf->top__DOT__inst 
                                     >> 0x19U))));
    tracep->fullBit(oldp+162,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle32_v));
    tracep->fullBit(oldp+163,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vv));
    tracep->fullBit(oldp+164,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vi));
    tracep->fullBit(oldp+165,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vx));
    tracep->fullBit(oldp+166,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vv));
    tracep->fullBit(oldp+167,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vi));
    tracep->fullBit(oldp+168,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vx));
    tracep->fullBit(oldp+169,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmac_vv));
    tracep->fullBit(oldp+170,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsum_vv));
    tracep->fullBit(oldp+171,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsus_vv));
    tracep->fullQData(oldp+172,((((- (QData)((IData)(
                                                     (1U 
                                                      & (vlSelf->top__DOT__inst 
                                                         >> 0x13U))))) 
                                  << 5U) | (QData)((IData)(
                                                           (0x1fU 
                                                            & (vlSelf->top__DOT__inst 
                                                               >> 0xfU)))))),64);
    tracep->fullIData(oldp+174,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__i),32);
    tracep->fullWData(oldp+175,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[0]),512);
    tracep->fullWData(oldp+191,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[1]),512);
    tracep->fullWData(oldp+207,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[2]),512);
    tracep->fullWData(oldp+223,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[3]),512);
    tracep->fullWData(oldp+239,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[4]),512);
    tracep->fullWData(oldp+255,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[5]),512);
    tracep->fullWData(oldp+271,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[6]),512);
    tracep->fullWData(oldp+287,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[7]),512);
    tracep->fullWData(oldp+303,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[8]),512);
    tracep->fullWData(oldp+319,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[9]),512);
    tracep->fullWData(oldp+335,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[10]),512);
    tracep->fullWData(oldp+351,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[11]),512);
    tracep->fullWData(oldp+367,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[12]),512);
    tracep->fullWData(oldp+383,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[13]),512);
    tracep->fullWData(oldp+399,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[14]),512);
    tracep->fullWData(oldp+415,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[15]),512);
    tracep->fullWData(oldp+431,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[16]),512);
    tracep->fullWData(oldp+447,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[17]),512);
    tracep->fullWData(oldp+463,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[18]),512);
    tracep->fullWData(oldp+479,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[19]),512);
    tracep->fullWData(oldp+495,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[20]),512);
    tracep->fullWData(oldp+511,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[21]),512);
    tracep->fullWData(oldp+527,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[22]),512);
    tracep->fullWData(oldp+543,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[23]),512);
    tracep->fullWData(oldp+559,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[24]),512);
    tracep->fullWData(oldp+575,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[25]),512);
    tracep->fullWData(oldp+591,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[26]),512);
    tracep->fullWData(oldp+607,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[27]),512);
    tracep->fullWData(oldp+623,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[28]),512);
    tracep->fullWData(oldp+639,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[29]),512);
    tracep->fullWData(oldp+655,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[30]),512);
    tracep->fullWData(oldp+671,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[31]),512);
    tracep->fullQData(oldp+687,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                  ? ((0x3fU >= (0x38U 
                                                & ((IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv) 
                                                   << 3U)))
                                      ? ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                           ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                           : 0ULL) 
                                         << (0x38U 
                                             & ((IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv) 
                                                << 3U)))
                                      : 0ULL) : ((2U 
                                                  == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                  ? 
                                                 ((0x3fU 
                                                   >= 
                                                   (0x30U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                                >> 1U)) 
                                                       << 4U)))
                                                   ? 
                                                  ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                                     ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                     : 0ULL) 
                                                   << 
                                                   (0x30U 
                                                    & ((IData)(
                                                               (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                                >> 1U)) 
                                                       << 4U)))
                                                   : 0ULL)
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                   ? 
                                                  ((0x3fU 
                                                    >= 
                                                    (0x20U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                                 >> 2U)) 
                                                        << 5U)))
                                                    ? 
                                                   ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                                      ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                      : 0ULL) 
                                                    << 
                                                    (0x20U 
                                                     & ((IData)(
                                                                (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                                 >> 2U)) 
                                                        << 5U)))
                                                    : 0ULL)
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                    ? 
                                                   (((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                                     ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                     : 0ULL)
                                                    : 0ULL))))),64);
    tracep->fullCData(oldp+689,(((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                  ? (0x1fU & (vlSelf->top__DOT__inst 
                                              >> 0xfU))
                                  : 0U)),5);
    tracep->fullBit(oldp+690,(((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc) 
                               | (IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g))));
    tracep->fullQData(oldp+691,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                  ? (((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm) 
                                                             >> 7U))))) 
                                      << 8U) | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm)))
                                  : ((4U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                      ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm))
                                      : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                          ? (((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                                                                     >> 0xfU))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)))
                                          : ((5U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                              ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY))
                                              : ((3U 
                                                  == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
                                                                               >> 0x1fU))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C)))
                                                  : 
                                                 ((6U 
                                                   == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                   ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C))
                                                   : 
                                                  ((7U 
                                                    == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                    ? vlSelf->top__DOT__ram_r_data
                                                    : 0ULL)))))))),64);
    tracep->fullQData(oldp+693,((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                  ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                  : 0ULL)),64);
    tracep->fullQData(oldp+695,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0]),64);
    tracep->fullQData(oldp+697,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[1]),64);
    tracep->fullQData(oldp+699,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[2]),64);
    tracep->fullQData(oldp+701,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[3]),64);
    tracep->fullQData(oldp+703,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[4]),64);
    tracep->fullQData(oldp+705,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[5]),64);
    tracep->fullQData(oldp+707,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[6]),64);
    tracep->fullQData(oldp+709,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[7]),64);
    tracep->fullQData(oldp+711,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[8]),64);
    tracep->fullQData(oldp+713,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[9]),64);
    tracep->fullQData(oldp+715,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[10]),64);
    tracep->fullQData(oldp+717,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[11]),64);
    tracep->fullQData(oldp+719,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[12]),64);
    tracep->fullQData(oldp+721,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[13]),64);
    tracep->fullQData(oldp+723,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[14]),64);
    tracep->fullQData(oldp+725,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[15]),64);
    tracep->fullQData(oldp+727,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[16]),64);
    tracep->fullQData(oldp+729,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[17]),64);
    tracep->fullQData(oldp+731,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[18]),64);
    tracep->fullQData(oldp+733,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[19]),64);
    tracep->fullQData(oldp+735,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[20]),64);
    tracep->fullQData(oldp+737,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[21]),64);
    tracep->fullQData(oldp+739,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[22]),64);
    tracep->fullQData(oldp+741,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[23]),64);
    tracep->fullQData(oldp+743,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[24]),64);
    tracep->fullQData(oldp+745,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[25]),64);
    tracep->fullQData(oldp+747,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[26]),64);
    tracep->fullQData(oldp+749,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[27]),64);
    tracep->fullQData(oldp+751,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[28]),64);
    tracep->fullQData(oldp+753,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[29]),64);
    tracep->fullQData(oldp+755,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[30]),64);
    tracep->fullQData(oldp+757,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[31]),64);
    tracep->fullCData(oldp+759,(((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                                  ? (0x1fU & (vlSelf->top__DOT__inst 
                                              >> 0xfU))
                                  : 0U)),5);
    tracep->fullCData(oldp+760,((0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                           & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                                           ? (0x1fU 
                                              & (vlSelf->top__DOT__inst 
                                                 >> 0x14U))
                                           : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                               & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                               ? (0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 7U))
                                               : 0U)))),5);
    if (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle32_v) 
         | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v))) {
        if (vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v) {
            __Vtemp_h43b11df6__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0U];
            __Vtemp_h43b11df6__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[1U];
            __Vtemp_h43b11df6__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[2U];
            __Vtemp_h43b11df6__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[3U];
            __Vtemp_h43b11df6__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[4U];
            __Vtemp_h43b11df6__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[5U];
            __Vtemp_h43b11df6__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[6U];
            __Vtemp_h43b11df6__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[7U];
            __Vtemp_h43b11df6__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[8U];
            __Vtemp_h43b11df6__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[9U];
            __Vtemp_h43b11df6__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xaU];
            __Vtemp_h43b11df6__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xbU];
            __Vtemp_h43b11df6__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xcU];
            __Vtemp_h43b11df6__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xdU];
            __Vtemp_h43b11df6__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xeU];
            __Vtemp_h43b11df6__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xfU];
        } else {
            __Vtemp_h43b11df6__0[0U] = vlSelf->top__DOT__vram_r_data[0U];
            __Vtemp_h43b11df6__0[1U] = vlSelf->top__DOT__vram_r_data[1U];
            __Vtemp_h43b11df6__0[2U] = vlSelf->top__DOT__vram_r_data[2U];
            __Vtemp_h43b11df6__0[3U] = vlSelf->top__DOT__vram_r_data[3U];
            __Vtemp_h43b11df6__0[4U] = vlSelf->top__DOT__vram_r_data[4U];
            __Vtemp_h43b11df6__0[5U] = vlSelf->top__DOT__vram_r_data[5U];
            __Vtemp_h43b11df6__0[6U] = vlSelf->top__DOT__vram_r_data[6U];
            __Vtemp_h43b11df6__0[7U] = vlSelf->top__DOT__vram_r_data[7U];
            __Vtemp_h43b11df6__0[8U] = vlSelf->top__DOT__vram_r_data[8U];
            __Vtemp_h43b11df6__0[9U] = vlSelf->top__DOT__vram_r_data[9U];
            __Vtemp_h43b11df6__0[0xaU] = vlSelf->top__DOT__vram_r_data[0xaU];
            __Vtemp_h43b11df6__0[0xbU] = vlSelf->top__DOT__vram_r_data[0xbU];
            __Vtemp_h43b11df6__0[0xcU] = vlSelf->top__DOT__vram_r_data[0xcU];
            __Vtemp_h43b11df6__0[0xdU] = vlSelf->top__DOT__vram_r_data[0xdU];
            __Vtemp_h43b11df6__0[0xeU] = vlSelf->top__DOT__vram_r_data[0xeU];
            __Vtemp_h43b11df6__0[0xfU] = vlSelf->top__DOT__vram_r_data[0xfU];
        }
    } else {
        __Vtemp_h43b11df6__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U];
        __Vtemp_h43b11df6__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U];
        __Vtemp_h43b11df6__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U];
        __Vtemp_h43b11df6__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U];
        __Vtemp_h43b11df6__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U];
        __Vtemp_h43b11df6__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U];
        __Vtemp_h43b11df6__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U];
        __Vtemp_h43b11df6__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U];
        __Vtemp_h43b11df6__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U];
        __Vtemp_h43b11df6__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U];
        __Vtemp_h43b11df6__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU];
        __Vtemp_h43b11df6__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU];
        __Vtemp_h43b11df6__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU];
        __Vtemp_h43b11df6__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU];
        __Vtemp_h43b11df6__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU];
        __Vtemp_h43b11df6__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU];
    }
    tracep->fullWData(oldp+761,(__Vtemp_h43b11df6__0),512);
    if (vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v) {
        __Vtemp_ha7bd460c__1[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0U];
        __Vtemp_ha7bd460c__1[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[1U];
        __Vtemp_ha7bd460c__1[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[2U];
        __Vtemp_ha7bd460c__1[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[3U];
        __Vtemp_ha7bd460c__1[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[4U];
        __Vtemp_ha7bd460c__1[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[5U];
        __Vtemp_ha7bd460c__1[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[6U];
        __Vtemp_ha7bd460c__1[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[7U];
        __Vtemp_ha7bd460c__1[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[8U];
        __Vtemp_ha7bd460c__1[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[9U];
        __Vtemp_ha7bd460c__1[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xaU];
        __Vtemp_ha7bd460c__1[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xbU];
        __Vtemp_ha7bd460c__1[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xcU];
        __Vtemp_ha7bd460c__1[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xdU];
        __Vtemp_ha7bd460c__1[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xeU];
        __Vtemp_ha7bd460c__1[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xfU];
    } else {
        __Vtemp_ha7bd460c__1[0U] = vlSelf->top__DOT__vram_r_data[0U];
        __Vtemp_ha7bd460c__1[1U] = vlSelf->top__DOT__vram_r_data[1U];
        __Vtemp_ha7bd460c__1[2U] = vlSelf->top__DOT__vram_r_data[2U];
        __Vtemp_ha7bd460c__1[3U] = vlSelf->top__DOT__vram_r_data[3U];
        __Vtemp_ha7bd460c__1[4U] = vlSelf->top__DOT__vram_r_data[4U];
        __Vtemp_ha7bd460c__1[5U] = vlSelf->top__DOT__vram_r_data[5U];
        __Vtemp_ha7bd460c__1[6U] = vlSelf->top__DOT__vram_r_data[6U];
        __Vtemp_ha7bd460c__1[7U] = vlSelf->top__DOT__vram_r_data[7U];
        __Vtemp_ha7bd460c__1[8U] = vlSelf->top__DOT__vram_r_data[8U];
        __Vtemp_ha7bd460c__1[9U] = vlSelf->top__DOT__vram_r_data[9U];
        __Vtemp_ha7bd460c__1[0xaU] = vlSelf->top__DOT__vram_r_data[0xaU];
        __Vtemp_ha7bd460c__1[0xbU] = vlSelf->top__DOT__vram_r_data[0xbU];
        __Vtemp_ha7bd460c__1[0xcU] = vlSelf->top__DOT__vram_r_data[0xcU];
        __Vtemp_ha7bd460c__1[0xdU] = vlSelf->top__DOT__vram_r_data[0xdU];
        __Vtemp_ha7bd460c__1[0xeU] = vlSelf->top__DOT__vram_r_data[0xeU];
        __Vtemp_ha7bd460c__1[0xfU] = vlSelf->top__DOT__vram_r_data[0xfU];
    }
    tracep->fullWData(oldp+777,(__Vtemp_ha7bd460c__1),512);
    tracep->fullQData(oldp+793,(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv),64);
    tracep->fullQData(oldp+795,(vlSelf->top__DOT__ram_r_data),64);
    tracep->fullQData(oldp+797,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__KzUS4LT1bsC),64);
    tracep->fullQData(oldp+799,(vlSelf->top__DOT__regs[0]),64);
    tracep->fullQData(oldp+801,(vlSelf->top__DOT__regs[1]),64);
    tracep->fullQData(oldp+803,(vlSelf->top__DOT__regs[2]),64);
    tracep->fullQData(oldp+805,(vlSelf->top__DOT__regs[3]),64);
    tracep->fullQData(oldp+807,(vlSelf->top__DOT__regs[4]),64);
    tracep->fullQData(oldp+809,(vlSelf->top__DOT__regs[5]),64);
    tracep->fullQData(oldp+811,(vlSelf->top__DOT__regs[6]),64);
    tracep->fullQData(oldp+813,(vlSelf->top__DOT__regs[7]),64);
    tracep->fullQData(oldp+815,(vlSelf->top__DOT__regs[8]),64);
    tracep->fullQData(oldp+817,(vlSelf->top__DOT__regs[9]),64);
    tracep->fullQData(oldp+819,(vlSelf->top__DOT__regs[10]),64);
    tracep->fullQData(oldp+821,(vlSelf->top__DOT__regs[11]),64);
    tracep->fullQData(oldp+823,(vlSelf->top__DOT__regs[12]),64);
    tracep->fullQData(oldp+825,(vlSelf->top__DOT__regs[13]),64);
    tracep->fullQData(oldp+827,(vlSelf->top__DOT__regs[14]),64);
    tracep->fullQData(oldp+829,(vlSelf->top__DOT__regs[15]),64);
    tracep->fullQData(oldp+831,(vlSelf->top__DOT__regs[16]),64);
    tracep->fullQData(oldp+833,(vlSelf->top__DOT__regs[17]),64);
    tracep->fullQData(oldp+835,(vlSelf->top__DOT__regs[18]),64);
    tracep->fullQData(oldp+837,(vlSelf->top__DOT__regs[19]),64);
    tracep->fullQData(oldp+839,(vlSelf->top__DOT__regs[20]),64);
    tracep->fullQData(oldp+841,(vlSelf->top__DOT__regs[21]),64);
    tracep->fullQData(oldp+843,(vlSelf->top__DOT__regs[22]),64);
    tracep->fullQData(oldp+845,(vlSelf->top__DOT__regs[23]),64);
    tracep->fullQData(oldp+847,(vlSelf->top__DOT__regs[24]),64);
    tracep->fullQData(oldp+849,(vlSelf->top__DOT__regs[25]),64);
    tracep->fullQData(oldp+851,(vlSelf->top__DOT__regs[26]),64);
    tracep->fullQData(oldp+853,(vlSelf->top__DOT__regs[27]),64);
    tracep->fullQData(oldp+855,(vlSelf->top__DOT__regs[28]),64);
    tracep->fullQData(oldp+857,(vlSelf->top__DOT__regs[29]),64);
    tracep->fullQData(oldp+859,(vlSelf->top__DOT__regs[30]),64);
    tracep->fullQData(oldp+861,(vlSelf->top__DOT__regs[31]),64);
    tracep->fullBit(oldp+863,(vlSelf->top__DOT__vec_rs1_r_ena));
    tracep->fullQData(oldp+864,(vlSelf->top__DOT__vec_rs1_data),64);
    tracep->fullWData(oldp+866,(vlSelf->top__DOT__vram_r_data),512);
    tracep->fullWData(oldp+882,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2),512);
    tracep->fullQData(oldp+898,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0]),64);
    tracep->fullQData(oldp+900,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[1]),64);
    tracep->fullQData(oldp+902,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[2]),64);
    tracep->fullQData(oldp+904,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[3]),64);
    tracep->fullQData(oldp+906,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[4]),64);
    tracep->fullQData(oldp+908,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[5]),64);
    tracep->fullQData(oldp+910,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[6]),64);
    tracep->fullQData(oldp+912,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[7]),64);
    tracep->fullQData(oldp+914,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[8]),64);
    tracep->fullQData(oldp+916,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[9]),64);
    tracep->fullQData(oldp+918,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[10]),64);
    tracep->fullQData(oldp+920,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[11]),64);
    tracep->fullQData(oldp+922,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[12]),64);
    tracep->fullQData(oldp+924,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[13]),64);
    tracep->fullQData(oldp+926,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[14]),64);
    tracep->fullQData(oldp+928,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[15]),64);
    tracep->fullQData(oldp+930,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[16]),64);
    tracep->fullQData(oldp+932,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[17]),64);
    tracep->fullQData(oldp+934,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[18]),64);
    tracep->fullQData(oldp+936,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[19]),64);
    tracep->fullQData(oldp+938,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[20]),64);
    tracep->fullQData(oldp+940,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[21]),64);
    tracep->fullQData(oldp+942,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[22]),64);
    tracep->fullQData(oldp+944,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[23]),64);
    tracep->fullQData(oldp+946,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[24]),64);
    tracep->fullQData(oldp+948,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[25]),64);
    tracep->fullQData(oldp+950,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[26]),64);
    tracep->fullQData(oldp+952,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[27]),64);
    tracep->fullQData(oldp+954,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[28]),64);
    tracep->fullQData(oldp+956,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[29]),64);
    tracep->fullQData(oldp+958,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[30]),64);
    tracep->fullQData(oldp+960,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[31]),64);
    tracep->fullQData(oldp+962,(vlSelf->top__DOT__RV64I__DOT__epavvrInwBl),64);
    tracep->fullBit(oldp+964,(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk));
    tracep->fullQData(oldp+965,(vlSelf->top__DOT__RV64I__DOT__MrCY1P97),64);
    tracep->fullBit(oldp+967,(vlSelf->top__DOT__RV64I__DOT__stsrseQpu));
    tracep->fullQData(oldp+968,(vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw),64);
    tracep->fullQData(oldp+970,(vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v),64);
    tracep->fullCData(oldp+972,(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1),8);
    tracep->fullBit(oldp+973,(vlSelf->top__DOT__RV64I__DOT__CP5BekSY));
    tracep->fullCData(oldp+974,(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w),5);
    tracep->fullQData(oldp+975,(vlSelf->top__DOT__RV64I__DOT__cSWijWYsS),64);
    tracep->fullQData(oldp+977,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx),64);
    tracep->fullBit(oldp+979,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc));
    tracep->fullIData(oldp+980,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C),32);
    tracep->fullSData(oldp+981,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY),16);
    tracep->fullCData(oldp+982,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm),8);
    tracep->fullQData(oldp+983,(((1U & (IData)((vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                >> 2U)))
                                  ? 0xffffffff00000000ULL
                                  : 0xffffffffULL)),64);
    tracep->fullQData(oldp+985,(((0U == (3U & (IData)(
                                                      (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                       >> 1U))))
                                  ? 0xffffULL : ((1U 
                                                  == 
                                                  (3U 
                                                   & (IData)(
                                                             (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                              >> 1U))))
                                                  ? 0xffff0000ULL
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                               >> 1U))))
                                                   ? 0xffff00000000ULL
                                                   : 
                                                  ((3U 
                                                    == 
                                                    (3U 
                                                     & (IData)(
                                                               (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                                >> 1U))))
                                                    ? 0xffff000000000000ULL
                                                    : 0ULL))))),64);
    tracep->fullQData(oldp+987,(((0U == (7U & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                  ? 0xffULL : ((1U 
                                                == 
                                                (7U 
                                                 & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                ? 0xff00ULL
                                                : (
                                                   (2U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                    ? 0xff0000ULL
                                                    : 
                                                   ((3U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                     ? 0xff000000ULL
                                                     : 
                                                    ((4U 
                                                      == 
                                                      (7U 
                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                      ? 0xff00000000ULL
                                                      : 
                                                     ((5U 
                                                       == 
                                                       (7U 
                                                        & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                       ? 0xff0000000000ULL
                                                       : 
                                                      ((6U 
                                                        == 
                                                        (7U 
                                                         & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                        ? 0xff000000000000ULL
                                                        : 
                                                       ((7U 
                                                         == 
                                                         (7U 
                                                          & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                         ? 0xff00000000000000ULL
                                                         : 0ULL))))))))),64);
    tracep->fullQData(oldp+989,(((vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                  - 0x80000000ULL) 
                                 >> 3U)),64);
    tracep->fullBit(oldp+991,(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en));
    tracep->fullBit(oldp+992,(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en));
    tracep->fullCData(oldp+993,(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode),8);
    tracep->fullWData(oldp+994,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1),512);
    tracep->fullWData(oldp+1010,(vlSelf->top__DOT__RV_VECTOR__DOT__valu_result),512);
    tracep->fullIData(oldp+1026,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp),32);
    tracep->fullIData(oldp+1027,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift),32);
    tracep->fullIData(oldp+1028,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift_t),32);
    tracep->fullWData(oldp+1029,(vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split),512);
    tracep->fullQData(oldp+1045,(((vlSelf->top__DOT__vec_rs1_data 
                                   - 0x80000000ULL) 
                                  >> 3U)),64);
    tracep->fullBit(oldp+1047,(vlSelf->clock));
    tracep->fullBit(oldp+1048,(vlSelf->reset));
    tracep->fullBit(oldp+1049,((1U & (~ (IData)(vlSelf->reset)))));
    tracep->fullQData(oldp+1050,(((IData)(vlSelf->reset)
                                   ? 0ULL : ((IData)(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk)
                                              ? vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                             [vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT]
                                              : 0ULL))),64);
    if (vlSelf->reset) {
        __Vtemp_h5ea47836__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h5ea47836__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h5ea47836__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h5ea47836__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h5ea47836__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h5ea47836__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h5ea47836__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h5ea47836__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h5ea47836__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h5ea47836__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h5ea47836__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h5ea47836__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h5ea47836__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h5ea47836__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h5ea47836__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h5ea47836__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en) {
        __Vtemp_h5ea47836__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0U];
        __Vtemp_h5ea47836__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][1U];
        __Vtemp_h5ea47836__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][2U];
        __Vtemp_h5ea47836__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][3U];
        __Vtemp_h5ea47836__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][4U];
        __Vtemp_h5ea47836__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][5U];
        __Vtemp_h5ea47836__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][6U];
        __Vtemp_h5ea47836__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][7U];
        __Vtemp_h5ea47836__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][8U];
        __Vtemp_h5ea47836__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][9U];
        __Vtemp_h5ea47836__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xaU];
        __Vtemp_h5ea47836__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xbU];
        __Vtemp_h5ea47836__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xcU];
        __Vtemp_h5ea47836__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xdU];
        __Vtemp_h5ea47836__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xeU];
        __Vtemp_h5ea47836__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
               ? (0x1fU & (vlSelf->top__DOT__inst >> 0xfU))
               : 0U)][0xfU];
    } else {
        __Vtemp_h5ea47836__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h5ea47836__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h5ea47836__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h5ea47836__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h5ea47836__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h5ea47836__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h5ea47836__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h5ea47836__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h5ea47836__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h5ea47836__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h5ea47836__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h5ea47836__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h5ea47836__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h5ea47836__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h5ea47836__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h5ea47836__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    tracep->fullWData(oldp+1052,(__Vtemp_h5ea47836__0),512);
    if (vlSelf->reset) {
        __Vtemp_h88f380bf__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h88f380bf__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h88f380bf__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h88f380bf__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h88f380bf__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h88f380bf__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h88f380bf__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h88f380bf__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h88f380bf__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h88f380bf__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h88f380bf__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h88f380bf__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h88f380bf__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h88f380bf__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h88f380bf__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h88f380bf__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) {
        __Vtemp_h88f380bf__0[0U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0U];
        __Vtemp_h88f380bf__0[1U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][1U];
        __Vtemp_h88f380bf__0[2U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][2U];
        __Vtemp_h88f380bf__0[3U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][3U];
        __Vtemp_h88f380bf__0[4U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][4U];
        __Vtemp_h88f380bf__0[5U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][5U];
        __Vtemp_h88f380bf__0[6U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][6U];
        __Vtemp_h88f380bf__0[7U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][7U];
        __Vtemp_h88f380bf__0[8U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][8U];
        __Vtemp_h88f380bf__0[9U] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][9U];
        __Vtemp_h88f380bf__0[0xaU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0xaU];
        __Vtemp_h88f380bf__0[0xbU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0xbU];
        __Vtemp_h88f380bf__0[0xcU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0xcU];
        __Vtemp_h88f380bf__0[0xdU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0xdU];
        __Vtemp_h88f380bf__0[0xeU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0xeU];
        __Vtemp_h88f380bf__0[0xfU] = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
            [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                        & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                        ? (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0x14U)) : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                   & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                   ? 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 7U))
                                                   : 0U)))][0xfU];
    } else {
        __Vtemp_h88f380bf__0[0U] = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        __Vtemp_h88f380bf__0[1U] = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        __Vtemp_h88f380bf__0[2U] = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        __Vtemp_h88f380bf__0[3U] = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        __Vtemp_h88f380bf__0[4U] = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        __Vtemp_h88f380bf__0[5U] = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        __Vtemp_h88f380bf__0[6U] = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        __Vtemp_h88f380bf__0[7U] = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        __Vtemp_h88f380bf__0[8U] = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        __Vtemp_h88f380bf__0[9U] = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        __Vtemp_h88f380bf__0[0xaU] = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        __Vtemp_h88f380bf__0[0xbU] = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        __Vtemp_h88f380bf__0[0xcU] = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        __Vtemp_h88f380bf__0[0xdU] = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        __Vtemp_h88f380bf__0[0xeU] = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        __Vtemp_h88f380bf__0[0xfU] = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    tracep->fullWData(oldp+1068,(__Vtemp_h88f380bf__0),512);
    tracep->fullBit(oldp+1084,(vlSelf->top__DOT__ren_inst));
    tracep->fullQData(oldp+1085,(vlSelf->top__DOT__raddr_inst),64);
    tracep->fullQData(oldp+1087,(vlSelf->top__DOT__rdata_inst),64);
    tracep->fullWData(oldp+1089,(Vtop__ConstPool__CONST_h8b2d9f06_0),512);
    tracep->fullQData(oldp+1105,(0xffffffffffffffffULL),64);
    tracep->fullBit(oldp+1107,(1U));
    tracep->fullBit(oldp+1108,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsup_vv));
}
