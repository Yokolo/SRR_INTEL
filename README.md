#  This repository contains an implementation of Schedule Round Robin loop scheduling strategy (SRR) in the Intel Runtime library.

## How to compile it ?

Enter the directory libomp_oss  
make  
Then in the repertory tmp you can find the dynamic library : libiomp5.so

## How to use it ?
You need to link this library with your application to be able to use SRR.
In the user program, you must call the function omp_set_workload(unsigned *tasks, unsigned int nbtasks).  
First argument is the array of load for each iteration and nbtasks is the length of this array (length of the loop where you are using srr).  
You also need to export the environment variable OMP_SCHEDULE to the string "srr" in lower case to be recognize by Intel Runtime



