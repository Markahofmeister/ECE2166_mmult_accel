// ==============================================================
// Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// ==============================================================
#ifndef __linux__

#include "xstatus.h"
#include "xparameters.h"
#include "xmm_mm.h"

extern XMm_mm_Config XMm_mm_ConfigTable[];

XMm_mm_Config *XMm_mm_LookupConfig(u16 DeviceId) {
	XMm_mm_Config *ConfigPtr = NULL;

	int Index;

	for (Index = 0; Index < XPAR_XMM_MM_NUM_INSTANCES; Index++) {
		if (XMm_mm_ConfigTable[Index].DeviceId == DeviceId) {
			ConfigPtr = &XMm_mm_ConfigTable[Index];
			break;
		}
	}

	return ConfigPtr;
}

int XMm_mm_Initialize(XMm_mm *InstancePtr, u16 DeviceId) {
	XMm_mm_Config *ConfigPtr;

	Xil_AssertNonvoid(InstancePtr != NULL);

	ConfigPtr = XMm_mm_LookupConfig(DeviceId);
	if (ConfigPtr == NULL) {
		InstancePtr->IsReady = 0;
		return (XST_DEVICE_NOT_FOUND);
	}

	return XMm_mm_CfgInitialize(InstancePtr, ConfigPtr);
}

#endif

