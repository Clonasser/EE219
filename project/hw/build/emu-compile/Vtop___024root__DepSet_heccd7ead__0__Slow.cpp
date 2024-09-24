// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ren_inst = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__raddr_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rdata_inst = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__ram_r_data = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__regs[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__rom_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__vec_rs1_r_ena = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__vec_rs1_data = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__vram_r_data);
    vlSelf->top__DOT__RV64I__DOT__epavvrInwBl = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RV64I__DOT__MrCY1P97 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__stsrseQpu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__wWjUJ9g = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__RV64I__DOT__ttyiClU = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RV64I__DOT__CP5BekSY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__RV64I__DOT__cSWijWYsS = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY = VL_RAND_RESET_I(21);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__bEPRS = VL_RAND_RESET_I(13);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ljuWe = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Sqk7XaBzon2D9v = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__KzUS4LT1bsC = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__H = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = VL_RAND_RESET_I(8);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2);
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__valu_result);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle32_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vx = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vx = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmac_vv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsum_vv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsus_vv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsup_vv = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift_t = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        VL_RAND_RESET_W(512, vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[__Vi0]);
    }
    vlSelf->__Vfunc_ram_inst_helper__0__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__1__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__3__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__4__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__5__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__6__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__7__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__8__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__9__Vfuncout = 0;
    vlSelf->__Vfunc_ram_read_helper__10__Vfuncout = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
