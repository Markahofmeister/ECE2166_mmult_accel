#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /ihome/ageorge/mah473/Desktop/Vitis_Accel_Examples/lab5_test_v4/_x.hw.xilinx_u200_xdma_201830_2/mm/mm/mm/solution/.autopilot/db/a.g.bc ${1+"$@"}
