Host Global Bandwidth
======================

Host to global memory bandwidth test

## EXCLUDED PLATFORMS
Platforms containing following strings in their names are not supported for this example :
```
u50
u280
vck
samsung
zc
```

##  DESIGN FILES
Application code is located in the src directory. Accelerator binary files will be compiled to the xclbin directory. The xclbin directory is required by the Makefile and its contents will be filled during compilation. A listing of all the files in this example is shown below

```
src/host.cpp
src/kernel.cpp
```

##  COMMAND LINE ARGUMENTS
Once the environment has been configured, the application can be executed by
```
./host_global <krnl_host_global XCLBIN>
```

