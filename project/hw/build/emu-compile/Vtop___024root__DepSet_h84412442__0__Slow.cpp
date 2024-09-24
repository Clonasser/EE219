// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024unit____Vdpiimwrap_ram_inst_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_inst_helper__Vfuncrtn);
extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;
void Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(CData/*0:0*/ en, QData/*63:0*/ rIdx, QData/*63:0*/ &ram_read_helper__Vfuncrtn);
extern const VlWide<15>/*479:0*/ Vtop__ConstPool__CONST_hbd99daea_0;

VL_ATTR_COLD void Vtop___024root___settle__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__2\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_h36e481a8__0;
    // Body
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0U] 
        = vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
        [0U];
    Vtop___024unit____Vdpiimwrap_ram_inst_helper_TOP____024unit(1U, 
                                                                ((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                                  - 0x80000000ULL) 
                                                                 >> 3U), vlSelf->__Vfunc_ram_inst_helper__0__Vfuncout);
    vlSelf->top__DOT__rom_rdata = vlSelf->__Vfunc_ram_inst_helper__0__Vfuncout;
    vlSelf->top__DOT__inst = ((1U & (IData)((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                             >> 2U)))
                               ? (IData)((vlSelf->top__DOT__rom_rdata 
                                          >> 0x20U))
                               : (IData)(vlSelf->top__DOT__rom_rdata));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vi 
        = (IData)((0x3057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vi 
        = (IData)((0x90003057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsus_vv 
        = (IData)((0x1c000057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsum_vv 
        = (IData)((0x3c000057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vv 
        = (IData)((0x57U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vv 
        = (IData)((0x90000057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmac_vv 
        = (IData)((0x4000057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v 
        = (IData)((0x6027U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vx 
        = (IData)((0x4057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vx 
        = (IData)((0x90004057U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle32_v 
        = (IData)((0x6007U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v 
        = (IData)((0x4006007U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__bEPRS 
        = ((0x1000U & (vlSelf->top__DOT__inst >> 0x13U)) 
           | ((0x800U & (vlSelf->top__DOT__inst << 4U)) 
              | ((0x7e0U & (vlSelf->top__DOT__inst 
                            >> 0x14U)) | (0x1eU & (vlSelf->top__DOT__inst 
                                                   >> 7U)))));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ljuWe 
        = ((0xfe0U & (vlSelf->top__DOT__inst >> 0x14U)) 
           | (0x1fU & (vlSelf->top__DOT__inst >> 7U)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY 
        = ((0x100000U & (vlSelf->top__DOT__inst >> 0xbU)) 
           | ((0xff000U & vlSelf->top__DOT__inst) | 
              ((0x800U & (vlSelf->top__DOT__inst >> 9U)) 
               | (0x7feU & (vlSelf->top__DOT__inst 
                            >> 0x14U)))));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ 
        = (IData)((0x13U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2 
        = (IData)((0x2013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ 
        = (IData)((0x3013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB 
        = (IData)((0x4013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt 
        = (IData)((0x6013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE 
        = (IData)((0x7013U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim 
        = (IData)((0x1013U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V 
        = (IData)((0x5013U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY 
        = (IData)((0x40005013U == (0xfc00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy 
        = (IData)((3U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr 
        = (IData)((0x1003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc 
        = (IData)((0x2003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt 
        = (IData)((0x4003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq 
        = (IData)((0x5003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI 
        = (IData)((0x6003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr 
        = (IData)((0x3003U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG 
        = (IData)((0x1bU == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5 
        = (IData)((0x101bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O 
        = (IData)((0x67U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg 
        = (IData)((0x501bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF 
        = (IData)((0x4000501bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4 
        = (IData)((0x33U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt 
        = (IData)((0x40000033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z 
        = (IData)((0x1033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb 
        = (IData)((0x2033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1 
        = (IData)((0x3033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r 
        = (IData)((0x4033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA 
        = (IData)((0x5033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ 
        = (IData)((0x40005033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln 
        = (IData)((0x6033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7 
        = (IData)((0x7033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I 
        = (IData)((0x2000033U == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A 
        = (IData)((0x3bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9 
        = (IData)((0x4000003bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4 
        = (IData)((0x103bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd 
        = (IData)((0x63U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a 
        = (IData)((0x1063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI 
        = (IData)((0x4063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg 
        = (IData)((0x5063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz 
        = (IData)((0x6063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj 
        = (IData)((0x7063U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7 
        = (IData)((0x503bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW 
        = (IData)((0x4000503bU == (0xfe00707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY 
        = (IData)((0x23U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no 
        = (IData)((0x1023U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4 
        = (IData)((0x2023U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49 
        = (IData)((0x3023U == (0x707fU & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en = ((~ (IData)(vlSelf->reset)) 
                                                & ((((((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vv) 
                                                       | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vv)) 
                                                      | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmac_vv)) 
                                                     | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsum_vv)) 
                                                    | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsus_vv)) 
                                                   | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsup_vv)));
    vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en = ((~ (IData)(vlSelf->reset)) 
                                                & ((((((((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v) 
                                                         | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vv)) 
                                                        | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vi)) 
                                                       | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vx)) 
                                                      | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vv)) 
                                                     | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vi)) 
                                                    | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vx)) 
                                                   | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmac_vv)));
    vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en = (
                                                   (((((((((((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle32_v) 
                                                             | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vv)) 
                                                            | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vi)) 
                                                           | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vx)) 
                                                          | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v)) 
                                                         | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vv)) 
                                                        | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vi)) 
                                                       | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vx)) 
                                                      | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmac_vv)) 
                                                     | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsum_vv)) 
                                                    | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsus_vv)) 
                                                   | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsup_vv));
    vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode = 
        ((IData)(vlSelf->reset) ? 0x80U : ((((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle32_v) 
                                             | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)) 
                                            | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v))
                                            ? 0x80U
                                            : ((((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vv) 
                                                 | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vi)) 
                                                | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vx))
                                                ? 0x81U
                                                : (
                                                   (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vv) 
                                                     | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vi)) 
                                                    | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vx))
                                                    ? 0x82U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmac_vv)
                                                     ? 0x83U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsum_vv)
                                                      ? 0x88U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsus_vv)
                                                       ? 0x89U
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsup_vv)
                                                        ? 0x8bU
                                                        : 0x80U))))))));
    vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren = ((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle32_v) 
                                                  | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v));
    vlSelf->top__DOT__vec_rs1_r_ena = ((~ (IData)(vlSelf->reset)) 
                                       & (((((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle32_v) 
                                             | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)) 
                                            | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vx)) 
                                           | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vx)) 
                                          | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v)));
    vlSelf->top__DOT__RV64I__DOT__wWjUJ9g = ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst)) 
                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O));
    vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z = (
                                                   (((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)) 
                                                    | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__bEPRS) 
                                                                            >> 0xcU))))) 
                                                     << 0xdU) 
                                                    | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__bEPRS)))
                                                    : 0ULL);
    vlSelf->top__DOT__RV64I__DOT__CP5BekSY = ((IData)(vlSelf->reset)
                                               ? 0U
                                               : ((
                                                   ((((((((((((((((((((((((((((((((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ)) 
                                                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2)) 
                                                                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ)) 
                                                                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB)) 
                                                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt)) 
                                                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE)) 
                                                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG)) 
                                                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim)) 
                                                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V)) 
                                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY)) 
                                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)) 
                                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg)) 
                                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF)) 
                                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4)) 
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
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW)) 
                                                    | (0x37U 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst))) 
                                                   | (0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__inst))) 
                                                  | (0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__inst))));
    vlSelf->top__DOT__RV64I__DOT__ttyiClU = ((((((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst)) 
                                                 | (0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__inst))) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
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
                                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW)))
                                              ? (0x1fU 
                                                 & (vlSelf->top__DOT__inst 
                                                    >> 7U))
                                              : 0U);
    vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c = (
                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY))
                                                    ? 1U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)
                                                     ? 4U
                                                     : 
                                                    (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no))
                                                      ? 2U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)
                                                       ? 5U
                                                       : 
                                                      (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4))
                                                        ? 3U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)
                                                         ? 6U
                                                         : 
                                                        (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr) 
                                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                                          ? 7U
                                                          : 0U)))))));
    vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1 = ((IData)(vlSelf->reset)
                                                 ? 0U
                                                 : 
                                                ((0x37U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst))
                                                  ? 0x20U
                                                  : 
                                                 ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__inst))
                                                   ? 0x21U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__inst))
                                                    ? 0x40U
                                                    : 
                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O)
                                                     ? 0x80U
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd)
                                                      ? 0x60U
                                                      : 
                                                     ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)
                                                       ? 0x61U
                                                       : 
                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)
                                                        ? 0x62U
                                                        : 
                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)
                                                         ? 0x63U
                                                         : 
                                                        ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz)
                                                          ? 0x64U
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj)
                                                           ? 0x65U
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy)
                                                            ? 0x80U
                                                            : 
                                                           ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)
                                                             ? 0x80U
                                                             : 
                                                            ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)
                                                              ? 0x80U
                                                              : 
                                                             ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)
                                                               ? 0x80U
                                                               : 
                                                              ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)
                                                                ? 0x80U
                                                                : 
                                                               ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY)
                                                                 ? 0x80U
                                                                 : 
                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)
                                                                  ? 0x80U
                                                                  : 
                                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)
                                                                   ? 0x80U
                                                                   : 
                                                                  ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ)
                                                                    ? 0x80U
                                                                    : 
                                                                   ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2)
                                                                     ? 0x82U
                                                                     : 
                                                                    ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ)
                                                                      ? 0x83U
                                                                      : 
                                                                     ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB)
                                                                       ? 0x84U
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt)
                                                                        ? 0x85U
                                                                        : 
                                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE)
                                                                         ? 0x86U
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim)
                                                                          ? 0x87U
                                                                          : 
                                                                         ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V)
                                                                           ? 0x88U
                                                                           : 
                                                                          ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY)
                                                                            ? 0x89U
                                                                            : 
                                                                           ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4)
                                                                             ? 0x80U
                                                                             : 
                                                                            ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt)
                                                                              ? 0x81U
                                                                              : 
                                                                             ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z)
                                                                               ? 0x87U
                                                                               : 
                                                                              ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb)
                                                                                ? 0x82U
                                                                                : 
                                                                               ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1)
                                                                                 ? 0x83U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r)
                                                                                 ? 0x84U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA)
                                                                                 ? 0x88U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ)
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln)
                                                                                 ? 0x85U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7)
                                                                                 ? 0x86U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I)
                                                                                 ? 0x8aU
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)
                                                                                 ? 0x87U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg)
                                                                                 ? 0x88U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF)
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)
                                                                                 ? 0x80U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)
                                                                                 ? 0x81U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)
                                                                                 ? 0x87U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7)
                                                                                 ? 0x88U
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW)
                                                                                 ? 0x89U
                                                                                 : 
                                                                                ((0x6bU 
                                                                                == vlSelf->top__DOT__inst)
                                                                                 ? 0xb0U
                                                                                 : 
                                                                                ((0x5007fU 
                                                                                == vlSelf->top__DOT__inst)
                                                                                 ? 0xb1U
                                                                                 : 0U)))))))))))))))))))))))))))))))))))))))))))))))))))));
    vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT = 
        (0x1fU & (((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)) 
                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)) 
                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)) 
                      | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz) 
                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj))) 
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
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : (((0x6bU 
                                              == vlSelf->top__DOT__inst) 
                                             | (0x5007fU 
                                                == vlSelf->top__DOT__inst))
                                             ? 0xaU
                                             : 0U)));
    vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk = (
                                                   (~ (IData)(vlSelf->reset)) 
                                                   & (((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
                                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)) 
                                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)) 
                                                           | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)) 
                                                          | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz) 
                                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj))) 
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
                                                      | ((0x6bU 
                                                          == vlSelf->top__DOT__inst) 
                                                         | (0x5007fU 
                                                            == vlSelf->top__DOT__inst))));
    vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Sqk7XaBzon2D9v 
        = (((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O) 
                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ)) 
                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2)) 
                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ)) 
               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB)) 
              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt)) 
             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE)) 
            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG))
            ? (((- (QData)((IData)((vlSelf->top__DOT__inst 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->top__DOT__inst 
                                  >> 0x14U)))) : ((
                                                   ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (vlSelf->top__DOT__inst 
                                                                        >> 0x1fU)))) 
                                                    << 0xcU) 
                                                   | (QData)((IData)(
                                                                     (vlSelf->top__DOT__inst 
                                                                      >> 0x14U))))
                                                   : 
                                                  (((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V)) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg)) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF))
                                                    ? (QData)((IData)(
                                                                      (0x3fU 
                                                                       & (vlSelf->top__DOT__inst 
                                                                          >> 0x14U))))
                                                    : 
                                                   (((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ljuWe) 
                                                                             >> 0xbU))))) 
                                                      << 0xcU) 
                                                     | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ljuWe)))
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__inst))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY 
                                                                              >> 0x14U))))) 
                                                       << 0x15U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY)))
                                                      : 
                                                     (((0x37U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst)) 
                                                       | (0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__inst)))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (vlSelf->top__DOT__inst 
                                                                                >> 0x1fU))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (0xfffff000U 
                                                                          & vlSelf->top__DOT__inst))))
                                                       : 0ULL))))));
    vlSelf->top__DOT__RV64I__DOT__stsrseQpu = ((~ (IData)(vlSelf->reset)) 
                                               & ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
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
                                                  | ((0x6bU 
                                                      == vlSelf->top__DOT__inst) 
                                                     | (0x5007fU 
                                                        == vlSelf->top__DOT__inst))));
    if (vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) {
        if (vlSelf->reset) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [(0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                            & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                            ? (0x1fU & (vlSelf->top__DOT__inst 
                                        >> 0x14U)) : 
                           (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                             & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                             ? (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U)) : 0U)))][0xfU];
        } else {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        }
    } else {
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w = ((IData)(vlSelf->reset)
                                                ? 0U
                                                : (0x1fU 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__ttyiClU)));
    vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw = ((IData)(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk)
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg) 
                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7))
                                                   ? (QData)((IData)(
                                                                     ((IData)(vlSelf->reset)
                                                                       ? 0ULL
                                                                       : 
                                                                      ((IData)(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk)
                                                                        ? 
                                                                       vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                                       [vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT]
                                                                        : 0ULL))))
                                                   : 
                                                  (((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW))
                                                    ? 
                                                   (((QData)((IData)(
                                                                     (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (((IData)(vlSelf->reset)
                                                                                 ? 0ULL
                                                                                 : 
                                                                                ((IData)(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk)
                                                                                 ? 
                                                                                vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                                                [vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT]
                                                                                 : 0ULL)) 
                                                                                >> 0x1fU))))))) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      ((IData)(vlSelf->reset)
                                                                        ? 0ULL
                                                                        : 
                                                                       ((IData)(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk)
                                                                         ? 
                                                                        vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                                        [vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT]
                                                                         : 0ULL)))))
                                                    : 
                                                   ((IData)(vlSelf->reset)
                                                     ? 0ULL
                                                     : 
                                                    ((IData)(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk)
                                                      ? 
                                                     vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                     [vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT]
                                                      : 0ULL))))
                                                  : 0ULL);
    vlSelf->top__DOT__RV64I__DOT__MrCY1P97 = ((IData)(vlSelf->reset)
                                               ? 0ULL
                                               : ((IData)(vlSelf->top__DOT__RV64I__DOT__stsrseQpu)
                                                   ? 
                                                  vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
                                                  [
                                                  (0x1fU 
                                                   & ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
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
                                                       ? 
                                                      (0x1fU 
                                                       & (vlSelf->top__DOT__inst 
                                                          >> 0x14U))
                                                       : 
                                                      (((0x6bU 
                                                         == vlSelf->top__DOT__inst) 
                                                        | (0x5007fU 
                                                           == vlSelf->top__DOT__inst))
                                                        ? 0xaU
                                                        : 0U)))]
                                                   : 0ULL));
    vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v = (((
                                                   ((((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
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
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF))) 
                                                    | ((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))) 
                                                   | (0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__inst))) 
                                                  | ((0x37U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__inst)) 
                                                     | (0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__inst))))
                                                  ? vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Sqk7XaBzon2D9v
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__RV64I__DOT__stsrseQpu)
                                                   ? 
                                                  (((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7)) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW))
                                                    ? (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (IData)(vlSelf->top__DOT__RV64I__DOT__MrCY1P97))))
                                                    : vlSelf->top__DOT__RV64I__DOT__MrCY1P97)
                                                   : 0ULL));
    vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc 
        = ((0x60U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
            ? (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
               == vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
            : ((0x61U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                ? (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                   != vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                : ((0x62U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                    ? VL_LTS_IQQ(64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                    : ((0x63U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                        ? VL_GTES_IQQ(64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                        : ((0x64U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                            ? (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                               < vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                            : ((0x65U == (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1)) 
                               & (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                  >= vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)))))));
    if (vlSelf->reset) {
        vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx = 0ULL;
        vlSelf->top__DOT__RV64I__DOT__epavvrInwBl = 0x80000000ULL;
    } else {
        vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx 
            = ((0x80U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                ? ((0x40U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                    ? 0ULL : ((0x20U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                               ? 0ULL : ((0x10U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                          ? 0ULL : 
                                         ((8U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                           ? ((4U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                               ? 0ULL
                                               : ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                    * vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   VL_SHIFTRS_QQQ(64,64,64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                    : 
                                                   VL_SHIFTR_QQQ(64,64,64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))))
                                           : ((4U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                               ? ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   VL_SHIFTL_QQQ(64,64,64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                    & vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                    | vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                    ^ vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)))
                                               : ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   ((vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                     < vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                     ? 1ULL
                                                     : 0ULL)
                                                    : 
                                                   (VL_LTS_IQQ(64, vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw, vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                     ? 1ULL
                                                     : 0ULL))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                    - vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw 
                                                    + vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v))))))))
                : ((0x40U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                    ? ((0x20U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                            ? 0ULL : ((8U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z)
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z))))))
                        : ((0x10U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                            ? 0ULL : ((8U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 0ULL
                                                    : 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + 
                                                    (((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlSelf->top__DOT__inst)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY 
                                                                              >> 0x14U))))) 
                                                       << 0x15U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY)))
                                                      : 0ULL))))))))
                    : ((0x20U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                        ? ((0x10U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                            ? 0ULL : ((8U & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                       ? 0ULL : ((4U 
                                                  & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                  ? 0ULL
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                   ? 0ULL
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1))
                                                    ? 
                                                   (vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                                    + vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)
                                                    : vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v)))))
                        : 0ULL)));
        vlSelf->top__DOT__RV64I__DOT__epavvrInwBl = 
            ((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
              ? vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx
              : ((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc)
                  ? vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx
                  : 0x80000000ULL));
    }
    vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv = ((IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g)
                                                 ? 
                                                (4ULL 
                                                 + vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju)
                                                 : 
                                                ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)) 
                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)) 
                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx)))
                                                  : vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx));
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__KzUS4LT1bsC 
        = ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
             ? 1U : 0U) ? ((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                            ? ((0U == (7U & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                ? 0xffULL : ((1U == 
                                              (7U & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                              ? 0xff00ULL
                                              : ((2U 
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
                                                       : 0ULL))))))))
                            : ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                ? ((0U == (3U & (IData)(
                                                        (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                         >> 1U))))
                                    ? 0xffffULL : (
                                                   (1U 
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
                                                      : 0ULL))))
                                : ((3U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                    ? ((1U & (IData)(
                                                     (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                      >> 2U)))
                                        ? 0xffffffff00000000ULL
                                        : 0xffffffffULL)
                                    : ((7U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                        ? 0xffffffffffffffffULL
                                        : 0ULL)))) : 0ULL);
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(
                                                                ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                                                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr))
                                                                  ? 1U
                                                                  : 0U), 
                                                                ((vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                                  - 0x80000000ULL) 
                                                                 >> 3U), vlSelf->__Vfunc_ram_read_helper__1__Vfuncout);
    vlSelf->top__DOT__ram_r_data = vlSelf->__Vfunc_ram_read_helper__1__Vfuncout;
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
        = ((1U & (IData)((vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                          >> 2U))) ? (IData)((vlSelf->top__DOT__ram_r_data 
                                              >> 0x20U))
            : (IData)(vlSelf->top__DOT__ram_r_data));
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY 
        = (0xffffU & ((1U & (IData)((vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                     >> 1U))) ? (vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C 
                                                 >> 0x10U)
                       : vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C));
    vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm 
        = (0xffU & ((1U & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv))
                     ? ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                        >> 8U) : (IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)));
    vlSelf->top__DOT__RV64I__DOT__cSWijWYsS = ((IData)(vlSelf->reset)
                                                ? 0ULL
                                                : (
                                                   ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                                          | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                                         | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                                        | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr))
                                                     ? 1U
                                                     : 0U)
                                                    ? 
                                                   ((1U 
                                                     == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm) 
                                                                             >> 7U))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm)))
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                      ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY) 
                                                                               >> 0xfU))))) 
                                                        << 0x10U) 
                                                       | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY)))
                                                       : 
                                                      ((5U 
                                                        == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                                        ? (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY))
                                                        : 
                                                       ((3U 
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
                                                           : 0ULL)))))))
                                                    : vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv));
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[1U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (1U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [1U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[2U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (2U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [2U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[3U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (3U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [3U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[4U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (4U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [4U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[5U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (5U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [5U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[6U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (6U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [6U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[7U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (7U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [7U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[8U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (8U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [8U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[9U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (9U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [9U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xaU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xaU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xaU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xbU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xbU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xbU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xcU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xcU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xcU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xdU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xdU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xdU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xeU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xeU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xeU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0xfU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0xfU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0xfU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x10U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x10U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x10U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x11U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x11U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x11U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x12U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x12U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x12U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x13U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x13U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x13U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x14U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x14U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x14U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x15U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x15U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x15U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x16U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x16U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x16U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x17U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x17U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x17U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x18U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x18U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x18U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x19U] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x19U == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x19U]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1aU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1aU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1aU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1bU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1bU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1bU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1cU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1cU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1cU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1dU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1dU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1dU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1eU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1eU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1eU]);
    vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0x1fU] 
        = (((IData)(vlSelf->top__DOT__RV64I__DOT__CP5BekSY) 
            & (0x1fU == (IData)(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w)))
            ? vlSelf->top__DOT__RV64I__DOT__cSWijWYsS
            : vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw
           [0x1fU]);
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[1U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [1U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[2U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [2U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[3U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [3U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[4U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [4U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[5U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [5U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[6U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [6U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[7U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [7U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[8U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [8U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[9U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [9U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xaU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xaU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xbU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xbU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xcU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xcU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xdU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xdU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xeU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xeU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0xfU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0xfU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x10U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x10U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x11U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x11U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x12U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x12U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x13U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x13U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x14U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x14U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x15U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x15U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x16U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x16U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x17U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x17U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x18U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x18U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x19U] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x19U];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1aU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1aU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1bU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1bU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1cU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1cU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1dU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1dU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1eU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1eU];
    vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0x1fU] 
        = vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0
        [0x1fU];
    vlSelf->top__DOT__regs[0U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0U];
    vlSelf->top__DOT__regs[1U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [1U];
    vlSelf->top__DOT__regs[2U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [2U];
    vlSelf->top__DOT__regs[3U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [3U];
    vlSelf->top__DOT__regs[4U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [4U];
    vlSelf->top__DOT__regs[5U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [5U];
    vlSelf->top__DOT__regs[6U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [6U];
    vlSelf->top__DOT__regs[7U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [7U];
    vlSelf->top__DOT__regs[8U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [8U];
    vlSelf->top__DOT__regs[9U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [9U];
    vlSelf->top__DOT__regs[0xaU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xaU];
    vlSelf->top__DOT__regs[0xbU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xbU];
    vlSelf->top__DOT__regs[0xcU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xcU];
    vlSelf->top__DOT__regs[0xdU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xdU];
    vlSelf->top__DOT__regs[0xeU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xeU];
    vlSelf->top__DOT__regs[0xfU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0xfU];
    vlSelf->top__DOT__regs[0x10U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x10U];
    vlSelf->top__DOT__regs[0x11U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x11U];
    vlSelf->top__DOT__regs[0x12U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x12U];
    vlSelf->top__DOT__regs[0x13U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x13U];
    vlSelf->top__DOT__regs[0x14U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x14U];
    vlSelf->top__DOT__regs[0x15U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x15U];
    vlSelf->top__DOT__regs[0x16U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x16U];
    vlSelf->top__DOT__regs[0x17U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x17U];
    vlSelf->top__DOT__regs[0x18U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x18U];
    vlSelf->top__DOT__regs[0x19U] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x19U];
    vlSelf->top__DOT__regs[0x1aU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1aU];
    vlSelf->top__DOT__regs[0x1bU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1bU];
    vlSelf->top__DOT__regs[0x1cU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1cU];
    vlSelf->top__DOT__regs[0x1dU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1dU];
    vlSelf->top__DOT__regs[0x1eU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1eU];
    vlSelf->top__DOT__regs[0x1fU] = vlSelf->top__DOT____Vcellout__RV64I____pinNumber13
        [0x1fU];
    vlSelf->top__DOT__vec_rs1_data = ((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                       ? vlSelf->top__DOT__regs
                                      [((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                         ? (0x1fU & 
                                            (vlSelf->top__DOT__inst 
                                             >> 0xfU))
                                         : 0U)] : 0ULL);
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                ((vlSelf->top__DOT__vec_rs1_data 
                                                                  - 0x80000000ULL) 
                                                                 >> 3U), vlSelf->__Vfunc_ram_read_helper__3__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0U] = (IData)(vlSelf->__Vfunc_ram_read_helper__3__Vfuncout);
    vlSelf->top__DOT__vram_r_data[1U] = (IData)((vlSelf->__Vfunc_ram_read_helper__3__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (1ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__vec_rs1_data 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__4__Vfuncout);
    vlSelf->top__DOT__vram_r_data[2U] = (IData)(vlSelf->__Vfunc_ram_read_helper__4__Vfuncout);
    vlSelf->top__DOT__vram_r_data[3U] = (IData)((vlSelf->__Vfunc_ram_read_helper__4__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (2ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__vec_rs1_data 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__5__Vfuncout);
    vlSelf->top__DOT__vram_r_data[4U] = (IData)(vlSelf->__Vfunc_ram_read_helper__5__Vfuncout);
    vlSelf->top__DOT__vram_r_data[5U] = (IData)((vlSelf->__Vfunc_ram_read_helper__5__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (3ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__vec_rs1_data 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__6__Vfuncout);
    vlSelf->top__DOT__vram_r_data[6U] = (IData)(vlSelf->__Vfunc_ram_read_helper__6__Vfuncout);
    vlSelf->top__DOT__vram_r_data[7U] = (IData)((vlSelf->__Vfunc_ram_read_helper__6__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (4ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__vec_rs1_data 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__7__Vfuncout);
    vlSelf->top__DOT__vram_r_data[8U] = (IData)(vlSelf->__Vfunc_ram_read_helper__7__Vfuncout);
    vlSelf->top__DOT__vram_r_data[9U] = (IData)((vlSelf->__Vfunc_ram_read_helper__7__Vfuncout 
                                                 >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (5ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__vec_rs1_data 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__8__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xaU] = (IData)(vlSelf->__Vfunc_ram_read_helper__8__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xbU] = (IData)((vlSelf->__Vfunc_ram_read_helper__8__Vfuncout 
                                                   >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (6ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__vec_rs1_data 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__9__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xcU] = (IData)(vlSelf->__Vfunc_ram_read_helper__9__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xdU] = (IData)((vlSelf->__Vfunc_ram_read_helper__9__Vfuncout 
                                                   >> 0x20U));
    Vtop___024unit____Vdpiimwrap_ram_read_helper_TOP____024unit(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren, 
                                                                (7ULL 
                                                                 + 
                                                                 ((vlSelf->top__DOT__vec_rs1_data 
                                                                   - 0x80000000ULL) 
                                                                  >> 3U)), vlSelf->__Vfunc_ram_read_helper__10__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xeU] = (IData)(vlSelf->__Vfunc_ram_read_helper__10__Vfuncout);
    vlSelf->top__DOT__vram_r_data[0xfU] = (IData)((vlSelf->__Vfunc_ram_read_helper__10__Vfuncout 
                                                   >> 0x20U));
    if (vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en) {
        if (vlSelf->reset) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        } else if (vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en) {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                = vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile
                [((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                   ? (0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU)) : 0U)][0xfU];
        } else {
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[1U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[2U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[3U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[4U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[5U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[6U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[7U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[8U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                = Vtop__ConstPool__CONST_h93e1b771_0[9U];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
            vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
        }
    } else if (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vi) 
                | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vi))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
            = (IData)((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                  >> 0x13U))))) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->top__DOT__inst 
                                                     >> 0xfU))))));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
            = (IData)(((((- (QData)((IData)((1U & (vlSelf->top__DOT__inst 
                                                   >> 0x13U))))) 
                         << 5U) | (QData)((IData)((0x1fU 
                                                   & (vlSelf->top__DOT__inst 
                                                      >> 0xfU))))) 
                       >> 0x20U));
    } else if (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vx) 
                | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vx))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
            = (IData)(vlSelf->top__DOT__vec_rs1_data);
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
            = (IData)((vlSelf->top__DOT__vec_rs1_data 
                       >> 0x20U));
    } else {
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
            = Vtop__ConstPool__CONST_h93e1b771_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
            = Vtop__ConstPool__CONST_h93e1b771_0[0xfU];
    }
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__vram_r_data[0U] 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->top__DOT__vram_r_data[0U]));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[1U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__vram_r_data[0U] 
                              >> 0xfU)))) << 8U) | 
           (0xffU & (vlSelf->top__DOT__vram_r_data[0U] 
                     >> 8U)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[2U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__vram_r_data[0U] 
                              >> 0x17U)))) << 8U) | 
           (0xffU & (vlSelf->top__DOT__vram_r_data[0U] 
                     >> 0x10U)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[3U] 
        = (((- (IData)((vlSelf->top__DOT__vram_r_data[0U] 
                        >> 0x1fU))) << 8U) | (vlSelf->top__DOT__vram_r_data[0U] 
                                              >> 0x18U));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[4U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__vram_r_data[1U] 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->top__DOT__vram_r_data[1U]));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[5U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__vram_r_data[1U] 
                              >> 0xfU)))) << 8U) | 
           (0xffU & (vlSelf->top__DOT__vram_r_data[1U] 
                     >> 8U)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[6U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__vram_r_data[1U] 
                              >> 0x17U)))) << 8U) | 
           (0xffU & (vlSelf->top__DOT__vram_r_data[1U] 
                     >> 0x10U)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[7U] 
        = (((- (IData)((vlSelf->top__DOT__vram_r_data[1U] 
                        >> 0x1fU))) << 8U) | (vlSelf->top__DOT__vram_r_data[1U] 
                                              >> 0x18U));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[8U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__vram_r_data[2U] 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->top__DOT__vram_r_data[2U]));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[9U] 
        = (((- (IData)((1U & (vlSelf->top__DOT__vram_r_data[2U] 
                              >> 0xfU)))) << 8U) | 
           (0xffU & (vlSelf->top__DOT__vram_r_data[2U] 
                     >> 8U)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xaU] 
        = (((- (IData)((1U & (vlSelf->top__DOT__vram_r_data[2U] 
                              >> 0x17U)))) << 8U) | 
           (0xffU & (vlSelf->top__DOT__vram_r_data[2U] 
                     >> 0x10U)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xbU] 
        = (((- (IData)((vlSelf->top__DOT__vram_r_data[2U] 
                        >> 0x1fU))) << 8U) | (vlSelf->top__DOT__vram_r_data[2U] 
                                              >> 0x18U));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xcU] 
        = (((- (IData)((1U & (vlSelf->top__DOT__vram_r_data[3U] 
                              >> 7U)))) << 8U) | (0xffU 
                                                  & vlSelf->top__DOT__vram_r_data[3U]));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xdU] 
        = (((- (IData)((1U & (vlSelf->top__DOT__vram_r_data[3U] 
                              >> 0xfU)))) << 8U) | 
           (0xffU & (vlSelf->top__DOT__vram_r_data[3U] 
                     >> 8U)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xeU] 
        = (IData)((((QData)((IData)((((- (IData)((vlSelf->top__DOT__vram_r_data[3U] 
                                                  >> 0x1fU))) 
                                      << 8U) | (vlSelf->top__DOT__vram_r_data[3U] 
                                                >> 0x18U)))) 
                    << 0x20U) | (QData)((IData)((((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__vram_r_data[3U] 
                                                                 >> 0x17U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & (vlSelf->top__DOT__vram_r_data[3U] 
                                                       >> 0x10U)))))));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split[0xfU] 
        = (IData)(((((QData)((IData)((((- (IData)((
                                                   vlSelf->top__DOT__vram_r_data[3U] 
                                                   >> 0x1fU))) 
                                       << 8U) | (vlSelf->top__DOT__vram_r_data[3U] 
                                                 >> 0x18U)))) 
                     << 0x20U) | (QData)((IData)(((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__vram_r_data[3U] 
                                                                  >> 0x17U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & (vlSelf->top__DOT__vram_r_data[3U] 
                                                        >> 0x10U)))))) 
                   >> 0x20U));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp 
        = (((((((((((((((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U]) 
                        + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U]) 
                       + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U]) 
                      + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U]) 
                     + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U]) 
                    + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U]) 
                   + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U]) 
                  + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U]) 
                 + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U]) 
                + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU]) 
               + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU]) 
              + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU]) 
             + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU]) 
            + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU]) 
           + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU]);
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift_t 
        = ((IData)(1U) + (((- (IData)((vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp 
                                       >> 0x1fU))) 
                           << 0x19U) | (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp 
                                        >> 7U)));
    vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift 
        = ((0x80000000U & vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift_t) 
           | (vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift_t 
              >> 1U));
    if (vlSelf->reset) {
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU] = 0U;
    } else if ((0x80U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU] = 0U;
    } else if ((0x81U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                                         + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                                                     + 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                                          + vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                                                      + 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU])))) 
                       >> 0x20U));
    } else if ((0x82U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU])))) 
                       >> 0x20U));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU] 
            = (IData)((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU]))) 
                        << 0x20U) | (QData)((IData)(
                                                    (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                                                     * 
                                                     vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU])))));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU] 
            = (IData)(((((QData)((IData)((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU]))) 
                         << 0x20U) | (QData)((IData)(
                                                     (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                                                      * 
                                                      vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU])))) 
                       >> 0x20U));
    } else if ((0x83U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U] 
            = ((((((((((((((((vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0U] 
                              * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0U]) 
                             + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[1U] 
                                * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[1U])) 
                            + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[2U] 
                               * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[2U])) 
                           + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[3U] 
                              * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[3U])) 
                          + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[4U] 
                             * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[4U])) 
                         + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[5U] 
                            * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[5U])) 
                        + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[6U] 
                           * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[6U])) 
                       + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[7U] 
                          * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[7U])) 
                      + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[8U] 
                         * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[8U])) 
                     + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[9U] 
                        * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[9U])) 
                    + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xaU] 
                       * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xaU])) 
                   + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xbU] 
                      * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xbU])) 
                  + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xcU] 
                     * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xcU])) 
                 + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xdU] 
                    * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xdU])) 
                + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xeU] 
                   * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xeU])) 
               + (vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1[0xfU] 
                  * vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2[0xfU]));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xeU];
    } else if ((0x88U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U] 
            = (VL_LTS_III(32, 0x7fU, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp)
                ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp)
                            ? 0xffffff80U : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xeU];
    } else if ((0x8bU == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        VL_EXTEND_WI(512,32, __Vtemp_h36e481a8__0, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp);
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U] 
            = __Vtemp_h36e481a8__0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U] 
            = __Vtemp_h36e481a8__0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U] 
            = __Vtemp_h36e481a8__0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U] 
            = __Vtemp_h36e481a8__0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U] 
            = __Vtemp_h36e481a8__0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U] 
            = __Vtemp_h36e481a8__0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U] 
            = __Vtemp_h36e481a8__0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U] 
            = __Vtemp_h36e481a8__0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U] 
            = __Vtemp_h36e481a8__0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U] 
            = __Vtemp_h36e481a8__0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU] 
            = __Vtemp_h36e481a8__0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU] 
            = __Vtemp_h36e481a8__0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU] 
            = __Vtemp_h36e481a8__0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU] 
            = __Vtemp_h36e481a8__0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU] 
            = __Vtemp_h36e481a8__0[0xeU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU] 
            = __Vtemp_h36e481a8__0[0xfU];
    } else if ((0x89U == (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode))) {
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U] 
            = (VL_LTS_III(32, 0x7fU, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift)
                ? 0x7fU : (VL_GTS_III(32, 0xffffff80U, vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift)
                            ? 0xffffff80U : vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift));
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[1U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[2U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[3U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[4U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[5U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[6U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[7U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U] 
            = Vtop__ConstPool__CONST_hbd99daea_0[8U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[9U];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xaU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xbU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xcU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xdU];
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU] 
            = Vtop__ConstPool__CONST_hbd99daea_0[0xeU];
    } else {
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[1U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[2U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[3U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[4U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[5U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[6U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[7U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[8U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[9U] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xaU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xbU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xcU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xdU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xeU] = 0U;
        vlSelf->top__DOT__RV_VECTOR__DOT__valu_result[0xfU] = 0U;
    }
}
