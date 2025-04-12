#!/bin/bash
#SBATCH --nodes=1
#SBATCH --ntasks-per-node=16
#SBATCH --cluster=smp
#SBATCH --partition=smp
#SBATCH --time=1:00:00
#SBATCH --job-name=mmult_serial
#SBATCH --account=ece2166_2025s
#SBATCH --output=output3.txt
#SBATCH --constraint=amd,genoa

# Load Modules
module purge
module load gcc/12.2.0
module load valgrind

# Compile serial baseline
gcc -fopenmp -O2 mmult_serial.c -std=c99 -o mmult_serial.X


# Run mat mult. 
echo "=========================================================="
echo "START M = 512"
echo "=========================================================="
valgrind ./mmult_serial.X 512
./mmult_serial.X 512
./mmult_serial.X 512
./mmult_serial.X 512
./mmult_serial.X 512

echo "=========================================================="
echo "START M = 1024"
echo "=========================================================="
valgrind ./mmult_serial.X 1024
./mmult_serial.X 1024
./mmult_serial.X 1024
./mmult_serial.X 1024
./mmult_serial.X 1024

echo "=========================================================="
echo "START M = 2048"
echo "=========================================================="
valgrind ./mmult_serial.X 2048
./mmult_serial.X 2048
./mmult_serial.X 2048
./mmult_serial.X 2048
./mmult_serial.X 2048




