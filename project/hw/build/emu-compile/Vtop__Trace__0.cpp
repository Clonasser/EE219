// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

extern const VlWide<16>/*511:0*/ Vtop__ConstPool__CONST_h93e1b771_0;

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<16>/*511:0*/ __Vtemp_h43b11df6__0;
    VlWide<16>/*511:0*/ __Vtemp_ha7bd460c__1;
    VlWide<16>/*511:0*/ __Vtemp_h5ea47836__0;
    VlWide<16>/*511:0*/ __Vtemp_h88f380bf__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__inst),32);
        tracep->chgQData(oldp+1,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju),64);
        tracep->chgBit(oldp+3,(((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy) 
                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr)) 
                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc)) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt)) 
                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq)) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI)) 
                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr))
                                 ? 1U : 0U)));
        tracep->chgBit(oldp+4,((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                 ? 1U : 0U)));
        tracep->chgQData(oldp+5,(vlSelf->top__DOT__rom_rdata),64);
        tracep->chgBit(oldp+7,(vlSelf->top__DOT__RV_VECTOR__DOT__vmem_ren));
        tracep->chgBit(oldp+8,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v));
        tracep->chgCData(oldp+9,(vlSelf->top__DOT__RV64I__DOT__P9crpNurNqLiBT),5);
        tracep->chgCData(oldp+10,((0x1fU & ((((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
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
        tracep->chgBit(oldp+11,((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A)) 
                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9)) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4)) 
                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5))));
        tracep->chgBit(oldp+12,((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a)) 
                                   | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI)) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg)) 
                                 | ((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj)))));
        tracep->chgQData(oldp+13,(vlSelf->top__DOT__RV64I__DOT__gY53pm6Uc1a5z),64);
        tracep->chgBit(oldp+15,(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g));
        tracep->chgQData(oldp+16,((((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst)) 
                                    | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O))
                                    ? (((- (QData)((IData)(
                                                           (1U 
                                                            & (vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY 
                                                               >> 0x14U))))) 
                                        << 0x15U) | (QData)((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY)))
                                    : 0ULL)),64);
        tracep->chgCData(oldp+18,(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c),3);
        tracep->chgBit(oldp+19,((((((0x37U == (0x7fU 
                                               & vlSelf->top__DOT__inst)) 
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
        tracep->chgCData(oldp+20,(vlSelf->top__DOT__RV64I__DOT__ttyiClU),5);
        tracep->chgQData(oldp+21,(vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__db),64);
        tracep->chgIData(oldp+23,((0xfffff000U & vlSelf->top__DOT__inst)),32);
        tracep->chgIData(oldp+24,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__R9GYY),21);
        tracep->chgSData(oldp+25,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__bEPRS),13);
        tracep->chgSData(oldp+26,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ljuWe),12);
        tracep->chgSData(oldp+27,((vlSelf->top__DOT__inst 
                                   >> 0x14U)),12);
        tracep->chgCData(oldp+28,((vlSelf->top__DOT__inst 
                                   >> 0x19U)),7);
        tracep->chgCData(oldp+29,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+30,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+31,((7U & (vlSelf->top__DOT__inst 
                                         >> 0xcU))),3);
        tracep->chgCData(oldp+32,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 7U))),5);
        tracep->chgCData(oldp+33,((0x7fU & vlSelf->top__DOT__inst)),7);
        tracep->chgQData(oldp+34,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Sqk7XaBzon2D9v),64);
        tracep->chgBit(oldp+36,((0x37U == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->chgBit(oldp+37,((0x17U == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->chgBit(oldp+38,((0x6fU == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->chgBit(oldp+39,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ShXAdPB5O));
        tracep->chgBit(oldp+40,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YWBp3rEd));
        tracep->chgBit(oldp+41,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__uP7s2O0a));
        tracep->chgBit(oldp+42,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__RA58HofI));
        tracep->chgBit(oldp+43,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pX97QCtg));
        tracep->chgBit(oldp+44,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__IDE3hK2uz));
        tracep->chgBit(oldp+45,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__ycoCSReVj));
        tracep->chgBit(oldp+46,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nIiCfXy));
        tracep->chgBit(oldp+47,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__INFMfFr));
        tracep->chgBit(oldp+48,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__OkydoJc));
        tracep->chgBit(oldp+49,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__G4mS4Qzt));
        tracep->chgBit(oldp+50,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__YdPZj3Dq));
        tracep->chgBit(oldp+51,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY));
        tracep->chgBit(oldp+52,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no));
        tracep->chgBit(oldp+53,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4));
        tracep->chgBit(oldp+54,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SzgUUYWIJ));
        tracep->chgBit(oldp+55,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__u4KcONyV2));
        tracep->chgBit(oldp+56,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GbT8XbTzEJ));
        tracep->chgBit(oldp+57,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__TYeqOMZzB));
        tracep->chgBit(oldp+58,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__hTsfETwt));
        tracep->chgBit(oldp+59,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Pqvfr2zZE));
        tracep->chgBit(oldp+60,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wa0Zzdgim));
        tracep->chgBit(oldp+61,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__QjcCGqv8V));
        tracep->chgBit(oldp+62,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__qMhxEPDIY));
        tracep->chgBit(oldp+63,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wCAmo0T4));
        tracep->chgBit(oldp+64,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__nzJk0CYt));
        tracep->chgBit(oldp+65,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__KAZaki8Z));
        tracep->chgBit(oldp+66,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__GryHxQYb));
        tracep->chgBit(oldp+67,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tM5lueYO1));
        tracep->chgBit(oldp+68,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__JxgCKb0r));
        tracep->chgBit(oldp+69,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__rFrUt3HA));
        tracep->chgBit(oldp+70,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CsytHqHJ));
        tracep->chgBit(oldp+71,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__SVALFln));
        tracep->chgBit(oldp+72,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__yz2lRBz7));
        tracep->chgBit(oldp+73,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__WChG0j8I));
        tracep->chgBit(oldp+74,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CzgHuUSI));
        tracep->chgBit(oldp+75,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__A66ucgr));
        tracep->chgBit(oldp+76,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49));
        tracep->chgBit(oldp+77,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__mXoVztmUwG));
        tracep->chgBit(oldp+78,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__dWa2lYZtw5));
        tracep->chgBit(oldp+79,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__pngOwGCJUg));
        tracep->chgBit(oldp+80,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__CTHw1Tw4JF));
        tracep->chgBit(oldp+81,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__iBoxza85A));
        tracep->chgBit(oldp+82,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__sDefmLkP9));
        tracep->chgBit(oldp+83,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__tkNSPBbC4));
        tracep->chgBit(oldp+84,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__vkhuKAwC7));
        tracep->chgBit(oldp+85,(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__LYUGKdPgW));
        tracep->chgBit(oldp+86,((0x6bU == vlSelf->top__DOT__inst)));
        tracep->chgBit(oldp+87,((0x5007fU == vlSelf->top__DOT__inst)));
        tracep->chgIData(oldp+88,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__H),32);
        tracep->chgQData(oldp+89,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[0]),64);
        tracep->chgQData(oldp+91,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[1]),64);
        tracep->chgQData(oldp+93,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[2]),64);
        tracep->chgQData(oldp+95,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[3]),64);
        tracep->chgQData(oldp+97,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[4]),64);
        tracep->chgQData(oldp+99,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[5]),64);
        tracep->chgQData(oldp+101,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[6]),64);
        tracep->chgQData(oldp+103,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[7]),64);
        tracep->chgQData(oldp+105,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[8]),64);
        tracep->chgQData(oldp+107,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[9]),64);
        tracep->chgQData(oldp+109,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[10]),64);
        tracep->chgQData(oldp+111,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[11]),64);
        tracep->chgQData(oldp+113,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[12]),64);
        tracep->chgQData(oldp+115,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[13]),64);
        tracep->chgQData(oldp+117,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[14]),64);
        tracep->chgQData(oldp+119,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[15]),64);
        tracep->chgQData(oldp+121,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[16]),64);
        tracep->chgQData(oldp+123,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[17]),64);
        tracep->chgQData(oldp+125,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[18]),64);
        tracep->chgQData(oldp+127,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[19]),64);
        tracep->chgQData(oldp+129,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[20]),64);
        tracep->chgQData(oldp+131,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[21]),64);
        tracep->chgQData(oldp+133,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[22]),64);
        tracep->chgQData(oldp+135,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[23]),64);
        tracep->chgQData(oldp+137,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[24]),64);
        tracep->chgQData(oldp+139,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[25]),64);
        tracep->chgQData(oldp+141,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[26]),64);
        tracep->chgQData(oldp+143,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[27]),64);
        tracep->chgQData(oldp+145,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[28]),64);
        tracep->chgQData(oldp+147,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[29]),64);
        tracep->chgQData(oldp+149,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[30]),64);
        tracep->chgQData(oldp+151,(vlSelf->top__DOT__RV64I__DOT__juyxmMf__DOT__oxMw[31]),64);
        tracep->chgQData(oldp+153,(((vlSelf->top__DOT__RV64I__DOT__eD5A2ng0__DOT__nlju 
                                     - 0x80000000ULL) 
                                    >> 3U)),64);
        tracep->chgBit(oldp+155,(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en));
        tracep->chgBit(oldp+156,(((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle32_v) 
                                  | (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v))));
        tracep->chgBit(oldp+157,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle8_v));
        tracep->chgCData(oldp+158,(((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vid_wb_en)
                                     ? (0x1fU & (vlSelf->top__DOT__inst 
                                                 >> 7U))
                                     : 0U)),5);
        tracep->chgCData(oldp+159,((vlSelf->top__DOT__inst 
                                    >> 0x1aU)),6);
        tracep->chgBit(oldp+160,((1U & (vlSelf->top__DOT__inst 
                                        >> 0x19U))));
        tracep->chgBit(oldp+161,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vle32_v));
        tracep->chgBit(oldp+162,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vv));
        tracep->chgBit(oldp+163,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vi));
        tracep->chgBit(oldp+164,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vadd_vx));
        tracep->chgBit(oldp+165,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vv));
        tracep->chgBit(oldp+166,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vi));
        tracep->chgBit(oldp+167,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmul_vx));
        tracep->chgBit(oldp+168,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vmac_vv));
        tracep->chgBit(oldp+169,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsum_vv));
        tracep->chgBit(oldp+170,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vsus_vv));
        tracep->chgQData(oldp+171,((((- (QData)((IData)(
                                                        (1U 
                                                         & (vlSelf->top__DOT__inst 
                                                            >> 0x13U))))) 
                                     << 5U) | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->top__DOT__inst 
                                                                  >> 0xfU)))))),64);
        tracep->chgIData(oldp+173,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__i),32);
        tracep->chgWData(oldp+174,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[0]),512);
        tracep->chgWData(oldp+190,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[1]),512);
        tracep->chgWData(oldp+206,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[2]),512);
        tracep->chgWData(oldp+222,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[3]),512);
        tracep->chgWData(oldp+238,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[4]),512);
        tracep->chgWData(oldp+254,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[5]),512);
        tracep->chgWData(oldp+270,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[6]),512);
        tracep->chgWData(oldp+286,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[7]),512);
        tracep->chgWData(oldp+302,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[8]),512);
        tracep->chgWData(oldp+318,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[9]),512);
        tracep->chgWData(oldp+334,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[10]),512);
        tracep->chgWData(oldp+350,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[11]),512);
        tracep->chgWData(oldp+366,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[12]),512);
        tracep->chgWData(oldp+382,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[13]),512);
        tracep->chgWData(oldp+398,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[14]),512);
        tracep->chgWData(oldp+414,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[15]),512);
        tracep->chgWData(oldp+430,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[16]),512);
        tracep->chgWData(oldp+446,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[17]),512);
        tracep->chgWData(oldp+462,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[18]),512);
        tracep->chgWData(oldp+478,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[19]),512);
        tracep->chgWData(oldp+494,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[20]),512);
        tracep->chgWData(oldp+510,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[21]),512);
        tracep->chgWData(oldp+526,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[22]),512);
        tracep->chgWData(oldp+542,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[23]),512);
        tracep->chgWData(oldp+558,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[24]),512);
        tracep->chgWData(oldp+574,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[25]),512);
        tracep->chgWData(oldp+590,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[26]),512);
        tracep->chgWData(oldp+606,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[27]),512);
        tracep->chgWData(oldp+622,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[28]),512);
        tracep->chgWData(oldp+638,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[29]),512);
        tracep->chgWData(oldp+654,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[30]),512);
        tracep->chgWData(oldp+670,(vlSelf->top__DOT__RV_VECTOR__DOT__V_REGFILE__DOT__vregfile[31]),512);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        tracep->chgQData(oldp+686,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
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
                                         : 0ULL) : 
                                    ((2U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                      ? ((0x3fU >= 
                                          (0x30U & 
                                           ((IData)(
                                                    (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                     >> 1U)) 
                                            << 4U)))
                                          ? ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                               | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                               ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                               : 0ULL) 
                                             << (0x30U 
                                                 & ((IData)(
                                                            (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                             >> 1U)) 
                                                    << 4U)))
                                          : 0ULL) : 
                                     ((3U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                       ? ((0x3fU >= 
                                           (0x20U & 
                                            ((IData)(
                                                     (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                      >> 2U)) 
                                             << 5U)))
                                           ? ((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                                 | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                                | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                                ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                                : 0ULL) 
                                              << (0x20U 
                                                  & ((IData)(
                                                             (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                              >> 2U)) 
                                                     << 5U)))
                                           : 0ULL) : 
                                      ((7U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
                                        ? (((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                              | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                             | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                            | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                            ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                            : 0ULL)
                                        : 0ULL))))),64);
        tracep->chgCData(oldp+688,(((IData)(vlSelf->top__DOT__vec_rs1_r_ena)
                                     ? (0x1fU & (vlSelf->top__DOT__inst 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->chgBit(oldp+689,(((IData)(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc) 
                                  | (IData)(vlSelf->top__DOT__RV64I__DOT__wWjUJ9g))));
        tracep->chgQData(oldp+690,(((1U == (IData)(vlSelf->top__DOT__RV64I__DOT__Yb5ekIkGnKG8c))
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
                                             : ((5U 
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
                                                    : 0ULL)))))))),64);
        tracep->chgQData(oldp+692,((((((IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__C7aogzY) 
                                       | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__voYw5no)) 
                                      | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__wWtUhx4)) 
                                     | (IData)(vlSelf->top__DOT__RV64I__DOT__s7o2FNmy__DOT__Ljqmq49))
                                     ? vlSelf->top__DOT__RV64I__DOT__MrCY1P97
                                     : 0ULL)),64);
        tracep->chgQData(oldp+694,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[0]),64);
        tracep->chgQData(oldp+696,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[1]),64);
        tracep->chgQData(oldp+698,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[2]),64);
        tracep->chgQData(oldp+700,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[3]),64);
        tracep->chgQData(oldp+702,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[4]),64);
        tracep->chgQData(oldp+704,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[5]),64);
        tracep->chgQData(oldp+706,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[6]),64);
        tracep->chgQData(oldp+708,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[7]),64);
        tracep->chgQData(oldp+710,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[8]),64);
        tracep->chgQData(oldp+712,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[9]),64);
        tracep->chgQData(oldp+714,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[10]),64);
        tracep->chgQData(oldp+716,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[11]),64);
        tracep->chgQData(oldp+718,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[12]),64);
        tracep->chgQData(oldp+720,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[13]),64);
        tracep->chgQData(oldp+722,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[14]),64);
        tracep->chgQData(oldp+724,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[15]),64);
        tracep->chgQData(oldp+726,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[16]),64);
        tracep->chgQData(oldp+728,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[17]),64);
        tracep->chgQData(oldp+730,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[18]),64);
        tracep->chgQData(oldp+732,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[19]),64);
        tracep->chgQData(oldp+734,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[20]),64);
        tracep->chgQData(oldp+736,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[21]),64);
        tracep->chgQData(oldp+738,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[22]),64);
        tracep->chgQData(oldp+740,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[23]),64);
        tracep->chgQData(oldp+742,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[24]),64);
        tracep->chgQData(oldp+744,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[25]),64);
        tracep->chgQData(oldp+746,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[26]),64);
        tracep->chgQData(oldp+748,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[27]),64);
        tracep->chgQData(oldp+750,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[28]),64);
        tracep->chgQData(oldp+752,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[29]),64);
        tracep->chgQData(oldp+754,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[30]),64);
        tracep->chgQData(oldp+756,(vlSelf->top__DOT__RV64I__DOT____Vcellout__juyxmMf__imsnW0[31]),64);
        tracep->chgCData(oldp+758,(((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en)
                                     ? (0x1fU & (vlSelf->top__DOT__inst 
                                                 >> 0xfU))
                                     : 0U)),5);
        tracep->chgCData(oldp+759,((0x1fU & (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                              & (~ (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v)))
                                              ? (0x1fU 
                                                 & (vlSelf->top__DOT__inst 
                                                    >> 0x14U))
                                              : (((IData)(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en) 
                                                  & (IData)(vlSelf->top__DOT__RV_VECTOR__DOT__V_ID__DOT__inst_vse32_v))
                                                  ? 
                                                 (0x1fU 
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
        tracep->chgWData(oldp+760,(__Vtemp_h43b11df6__0),512);
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
        tracep->chgWData(oldp+776,(__Vtemp_ha7bd460c__1),512);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgQData(oldp+792,(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv),64);
        tracep->chgQData(oldp+794,(vlSelf->top__DOT__ram_r_data),64);
        tracep->chgQData(oldp+796,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__KzUS4LT1bsC),64);
        tracep->chgQData(oldp+798,(vlSelf->top__DOT__regs[0]),64);
        tracep->chgQData(oldp+800,(vlSelf->top__DOT__regs[1]),64);
        tracep->chgQData(oldp+802,(vlSelf->top__DOT__regs[2]),64);
        tracep->chgQData(oldp+804,(vlSelf->top__DOT__regs[3]),64);
        tracep->chgQData(oldp+806,(vlSelf->top__DOT__regs[4]),64);
        tracep->chgQData(oldp+808,(vlSelf->top__DOT__regs[5]),64);
        tracep->chgQData(oldp+810,(vlSelf->top__DOT__regs[6]),64);
        tracep->chgQData(oldp+812,(vlSelf->top__DOT__regs[7]),64);
        tracep->chgQData(oldp+814,(vlSelf->top__DOT__regs[8]),64);
        tracep->chgQData(oldp+816,(vlSelf->top__DOT__regs[9]),64);
        tracep->chgQData(oldp+818,(vlSelf->top__DOT__regs[10]),64);
        tracep->chgQData(oldp+820,(vlSelf->top__DOT__regs[11]),64);
        tracep->chgQData(oldp+822,(vlSelf->top__DOT__regs[12]),64);
        tracep->chgQData(oldp+824,(vlSelf->top__DOT__regs[13]),64);
        tracep->chgQData(oldp+826,(vlSelf->top__DOT__regs[14]),64);
        tracep->chgQData(oldp+828,(vlSelf->top__DOT__regs[15]),64);
        tracep->chgQData(oldp+830,(vlSelf->top__DOT__regs[16]),64);
        tracep->chgQData(oldp+832,(vlSelf->top__DOT__regs[17]),64);
        tracep->chgQData(oldp+834,(vlSelf->top__DOT__regs[18]),64);
        tracep->chgQData(oldp+836,(vlSelf->top__DOT__regs[19]),64);
        tracep->chgQData(oldp+838,(vlSelf->top__DOT__regs[20]),64);
        tracep->chgQData(oldp+840,(vlSelf->top__DOT__regs[21]),64);
        tracep->chgQData(oldp+842,(vlSelf->top__DOT__regs[22]),64);
        tracep->chgQData(oldp+844,(vlSelf->top__DOT__regs[23]),64);
        tracep->chgQData(oldp+846,(vlSelf->top__DOT__regs[24]),64);
        tracep->chgQData(oldp+848,(vlSelf->top__DOT__regs[25]),64);
        tracep->chgQData(oldp+850,(vlSelf->top__DOT__regs[26]),64);
        tracep->chgQData(oldp+852,(vlSelf->top__DOT__regs[27]),64);
        tracep->chgQData(oldp+854,(vlSelf->top__DOT__regs[28]),64);
        tracep->chgQData(oldp+856,(vlSelf->top__DOT__regs[29]),64);
        tracep->chgQData(oldp+858,(vlSelf->top__DOT__regs[30]),64);
        tracep->chgQData(oldp+860,(vlSelf->top__DOT__regs[31]),64);
        tracep->chgBit(oldp+862,(vlSelf->top__DOT__vec_rs1_r_ena));
        tracep->chgQData(oldp+863,(vlSelf->top__DOT__vec_rs1_data),64);
        tracep->chgWData(oldp+865,(vlSelf->top__DOT__vram_r_data),512);
        tracep->chgWData(oldp+881,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v2),512);
        tracep->chgQData(oldp+897,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[0]),64);
        tracep->chgQData(oldp+899,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[1]),64);
        tracep->chgQData(oldp+901,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[2]),64);
        tracep->chgQData(oldp+903,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[3]),64);
        tracep->chgQData(oldp+905,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[4]),64);
        tracep->chgQData(oldp+907,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[5]),64);
        tracep->chgQData(oldp+909,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[6]),64);
        tracep->chgQData(oldp+911,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[7]),64);
        tracep->chgQData(oldp+913,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[8]),64);
        tracep->chgQData(oldp+915,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[9]),64);
        tracep->chgQData(oldp+917,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[10]),64);
        tracep->chgQData(oldp+919,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[11]),64);
        tracep->chgQData(oldp+921,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[12]),64);
        tracep->chgQData(oldp+923,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[13]),64);
        tracep->chgQData(oldp+925,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[14]),64);
        tracep->chgQData(oldp+927,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[15]),64);
        tracep->chgQData(oldp+929,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[16]),64);
        tracep->chgQData(oldp+931,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[17]),64);
        tracep->chgQData(oldp+933,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[18]),64);
        tracep->chgQData(oldp+935,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[19]),64);
        tracep->chgQData(oldp+937,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[20]),64);
        tracep->chgQData(oldp+939,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[21]),64);
        tracep->chgQData(oldp+941,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[22]),64);
        tracep->chgQData(oldp+943,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[23]),64);
        tracep->chgQData(oldp+945,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[24]),64);
        tracep->chgQData(oldp+947,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[25]),64);
        tracep->chgQData(oldp+949,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[26]),64);
        tracep->chgQData(oldp+951,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[27]),64);
        tracep->chgQData(oldp+953,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[28]),64);
        tracep->chgQData(oldp+955,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[29]),64);
        tracep->chgQData(oldp+957,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[30]),64);
        tracep->chgQData(oldp+959,(vlSelf->top__DOT____Vcellout__RV64I____pinNumber13[31]),64);
        tracep->chgQData(oldp+961,(vlSelf->top__DOT__RV64I__DOT__epavvrInwBl),64);
        tracep->chgBit(oldp+963,(vlSelf->top__DOT__RV64I__DOT__hUduYqCAo0XLk));
        tracep->chgQData(oldp+964,(vlSelf->top__DOT__RV64I__DOT__MrCY1P97),64);
        tracep->chgBit(oldp+966,(vlSelf->top__DOT__RV64I__DOT__stsrseQpu));
        tracep->chgQData(oldp+967,(vlSelf->top__DOT__RV64I__DOT__BvitSgq1Hyw),64);
        tracep->chgQData(oldp+969,(vlSelf->top__DOT__RV64I__DOT__Lv5ku5dc93v),64);
        tracep->chgCData(oldp+971,(vlSelf->top__DOT__RV64I__DOT__FsjRBjnjb1),8);
        tracep->chgBit(oldp+972,(vlSelf->top__DOT__RV64I__DOT__CP5BekSY));
        tracep->chgCData(oldp+973,(vlSelf->top__DOT__RV64I__DOT__fjN1GhT7w),5);
        tracep->chgQData(oldp+974,(vlSelf->top__DOT__RV64I__DOT__cSWijWYsS),64);
        tracep->chgQData(oldp+976,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__ms6BV1DMBx),64);
        tracep->chgBit(oldp+978,(vlSelf->top__DOT__RV64I__DOT__yO7QPsT0y__DOT__Ha5GWqunguUc));
        tracep->chgIData(oldp+979,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__sKJju8Xgr7C),32);
        tracep->chgSData(oldp+980,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__bEdFnqpLQFY),16);
        tracep->chgCData(oldp+981,(vlSelf->top__DOT__RV64I__DOT__jjI7ZAzN2__DOT__ZxFtpStHVWm),8);
        tracep->chgQData(oldp+982,(((1U & (IData)((vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                   >> 2U)))
                                     ? 0xffffffff00000000ULL
                                     : 0xffffffffULL)),64);
        tracep->chgQData(oldp+984,(((0U == (3U & (IData)(
                                                         (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                          >> 1U))))
                                     ? 0xffffULL : 
                                    ((1U == (3U & (IData)(
                                                          (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                           >> 1U))))
                                      ? 0xffff0000ULL
                                      : ((2U == (3U 
                                                 & (IData)(
                                                           (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                            >> 1U))))
                                          ? 0xffff00000000ULL
                                          : ((3U == 
                                              (3U & (IData)(
                                                            (vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                                             >> 1U))))
                                              ? 0xffff000000000000ULL
                                              : 0ULL))))),64);
        tracep->chgQData(oldp+986,(((0U == (7U & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                     ? 0xffULL : ((1U 
                                                   == 
                                                   (7U 
                                                    & (IData)(vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv)))
                                                   ? 0xff00ULL
                                                   : 
                                                  ((2U 
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
        tracep->chgQData(oldp+988,(((vlSelf->top__DOT__RV64I__DOT__Zsgxv3MTUv 
                                     - 0x80000000ULL) 
                                    >> 3U)),64);
        tracep->chgBit(oldp+990,(vlSelf->top__DOT__RV_VECTOR__DOT__vs1_en));
        tracep->chgBit(oldp+991,(vlSelf->top__DOT__RV_VECTOR__DOT__vs2_en));
        tracep->chgCData(oldp+992,(vlSelf->top__DOT__RV_VECTOR__DOT__valu_opcode),8);
        tracep->chgWData(oldp+993,(vlSelf->top__DOT__RV_VECTOR__DOT__operand_v1),512);
        tracep->chgWData(oldp+1009,(vlSelf->top__DOT__RV_VECTOR__DOT__valu_result),512);
        tracep->chgIData(oldp+1025,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp),32);
        tracep->chgIData(oldp+1026,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift),32);
        tracep->chgIData(oldp+1027,(vlSelf->top__DOT__RV_VECTOR__DOT__V_ALU__DOT__sum_temp_shift_t),32);
        tracep->chgWData(oldp+1028,(vlSelf->top__DOT__RV_VECTOR__DOT__V_WB__DOT__vmem_split),512);
        tracep->chgQData(oldp+1044,(((vlSelf->top__DOT__vec_rs1_data 
                                      - 0x80000000ULL) 
                                     >> 3U)),64);
    }
    tracep->chgBit(oldp+1046,(vlSelf->clock));
    tracep->chgBit(oldp+1047,(vlSelf->reset));
    tracep->chgBit(oldp+1048,((1U & (~ (IData)(vlSelf->reset)))));
    tracep->chgQData(oldp+1049,(((IData)(vlSelf->reset)
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
    tracep->chgWData(oldp+1051,(__Vtemp_h5ea47836__0),512);
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
    tracep->chgWData(oldp+1067,(__Vtemp_h88f380bf__0),512);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
