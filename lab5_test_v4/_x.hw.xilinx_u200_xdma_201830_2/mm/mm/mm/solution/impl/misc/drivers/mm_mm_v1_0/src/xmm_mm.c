// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
/***************************** Include Files *********************************/
#include "xmm_mm.h"

/************************** Function Implementation *************************/
#ifndef __linux__
int XMm_mm_CfgInitialize(XMm_mm *InstancePtr, XMm_mm_Config *ConfigPtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(ConfigPtr != NULL);

    InstancePtr->Control_BaseAddress = ConfigPtr->Control_BaseAddress;
    InstancePtr->IsReady = XIL_COMPONENT_IS_READY;

    return XST_SUCCESS;
}
#endif

void XMm_mm_Start(XMm_mm *InstancePtr) {
    u32 Data;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_AP_CTRL) & 0x80;
    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_AP_CTRL, Data | 0x01);
}

u32 XMm_mm_IsDone(XMm_mm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_AP_CTRL);
    return (Data >> 1) & 0x1;
}

u32 XMm_mm_IsIdle(XMm_mm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_AP_CTRL);
    return (Data >> 2) & 0x1;
}

u32 XMm_mm_IsReady(XMm_mm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_AP_CTRL);
    // check ap_start to see if the pcore is ready for next input
    return !(Data & 0x1);
}

void XMm_mm_EnableAutoRestart(XMm_mm *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_AP_CTRL, 0x80);
}

void XMm_mm_DisableAutoRestart(XMm_mm *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_AP_CTRL, 0);
}

void XMm_mm_Set_A_p_V(XMm_mm *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_A_P_V_DATA, (u32)(Data));
    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_A_P_V_DATA + 4, (u32)(Data >> 32));
}

u64 XMm_mm_Get_A_p_V(XMm_mm *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_A_P_V_DATA);
    Data += (u64)XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_A_P_V_DATA + 4) << 32;
    return Data;
}

void XMm_mm_Set_B_p_V(XMm_mm *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_B_P_V_DATA, (u32)(Data));
    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_B_P_V_DATA + 4, (u32)(Data >> 32));
}

u64 XMm_mm_Get_B_p_V(XMm_mm *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_B_P_V_DATA);
    Data += (u64)XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_B_P_V_DATA + 4) << 32;
    return Data;
}

void XMm_mm_Set_AB_p_V(XMm_mm *InstancePtr, u64 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_AB_P_V_DATA, (u32)(Data));
    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_AB_P_V_DATA + 4, (u32)(Data >> 32));
}

u64 XMm_mm_Get_AB_p_V(XMm_mm *InstancePtr) {
    u64 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_AB_P_V_DATA);
    Data += (u64)XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_AB_P_V_DATA + 4) << 32;
    return Data;
}

void XMm_mm_Set_N(XMm_mm *InstancePtr, u32 Data) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_N_DATA, Data);
}

u32 XMm_mm_Get_N(XMm_mm *InstancePtr) {
    u32 Data;

    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Data = XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_N_DATA);
    return Data;
}

void XMm_mm_InterruptGlobalEnable(XMm_mm *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_GIE, 1);
}

void XMm_mm_InterruptGlobalDisable(XMm_mm *InstancePtr) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_GIE, 0);
}

void XMm_mm_InterruptEnable(XMm_mm *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_IER);
    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_IER, Register | Mask);
}

void XMm_mm_InterruptDisable(XMm_mm *InstancePtr, u32 Mask) {
    u32 Register;

    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    Register =  XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_IER);
    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_IER, Register & (~Mask));
}

void XMm_mm_InterruptClear(XMm_mm *InstancePtr, u32 Mask) {
    Xil_AssertVoid(InstancePtr != NULL);
    Xil_AssertVoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    XMm_mm_WriteReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_ISR, Mask);
}

u32 XMm_mm_InterruptGetEnabled(XMm_mm *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_IER);
}

u32 XMm_mm_InterruptGetStatus(XMm_mm *InstancePtr) {
    Xil_AssertNonvoid(InstancePtr != NULL);
    Xil_AssertNonvoid(InstancePtr->IsReady == XIL_COMPONENT_IS_READY);

    return XMm_mm_ReadReg(InstancePtr->Control_BaseAddress, XMM_MM_CONTROL_ADDR_ISR);
}

