// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef XMM_MM_H
#define XMM_MM_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xmm_mm_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Control_BaseAddress;
} XMm_mm_Config;
#endif

typedef struct {
    u32 Control_BaseAddress;
    u32 IsReady;
} XMm_mm;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XMm_mm_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XMm_mm_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XMm_mm_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XMm_mm_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XMm_mm_Initialize(XMm_mm *InstancePtr, u16 DeviceId);
XMm_mm_Config* XMm_mm_LookupConfig(u16 DeviceId);
int XMm_mm_CfgInitialize(XMm_mm *InstancePtr, XMm_mm_Config *ConfigPtr);
#else
int XMm_mm_Initialize(XMm_mm *InstancePtr, const char* InstanceName);
int XMm_mm_Release(XMm_mm *InstancePtr);
#endif

void XMm_mm_Start(XMm_mm *InstancePtr);
u32 XMm_mm_IsDone(XMm_mm *InstancePtr);
u32 XMm_mm_IsIdle(XMm_mm *InstancePtr);
u32 XMm_mm_IsReady(XMm_mm *InstancePtr);
void XMm_mm_EnableAutoRestart(XMm_mm *InstancePtr);
void XMm_mm_DisableAutoRestart(XMm_mm *InstancePtr);

void XMm_mm_Set_A_p_V(XMm_mm *InstancePtr, u64 Data);
u64 XMm_mm_Get_A_p_V(XMm_mm *InstancePtr);
void XMm_mm_Set_B_p_V(XMm_mm *InstancePtr, u64 Data);
u64 XMm_mm_Get_B_p_V(XMm_mm *InstancePtr);
void XMm_mm_Set_AB_p_V(XMm_mm *InstancePtr, u64 Data);
u64 XMm_mm_Get_AB_p_V(XMm_mm *InstancePtr);
void XMm_mm_Set_N(XMm_mm *InstancePtr, u32 Data);
u32 XMm_mm_Get_N(XMm_mm *InstancePtr);

void XMm_mm_InterruptGlobalEnable(XMm_mm *InstancePtr);
void XMm_mm_InterruptGlobalDisable(XMm_mm *InstancePtr);
void XMm_mm_InterruptEnable(XMm_mm *InstancePtr, u32 Mask);
void XMm_mm_InterruptDisable(XMm_mm *InstancePtr, u32 Mask);
void XMm_mm_InterruptClear(XMm_mm *InstancePtr, u32 Mask);
u32 XMm_mm_InterruptGetEnabled(XMm_mm *InstancePtr);
u32 XMm_mm_InterruptGetStatus(XMm_mm *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
