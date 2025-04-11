#!/bin/sh

# 
# v++(TM)
# runme.sh: a v++-generated Runs Script for UNIX
# Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/ihome/crc/install/xilinx/Vivado/2019.2/bin:/ihome/crc/install/xilinx/Vitis/2019.2/bin:/ihome/crc/install/xilinx/Vitis/2019.2/bin
else
  PATH=/ihome/crc/install/xilinx/Vivado/2019.2/bin:/ihome/crc/install/xilinx/Vitis/2019.2/bin:/ihome/crc/install/xilinx/Vitis/2019.2/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=
else
  LD_LIBRARY_PATH=:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/_x.hw.xilinx_u200_xdma_201830_2/mm/mm'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

EAStep vivado_hls -f mm.tcl -messageDb vivado_hls.pb
