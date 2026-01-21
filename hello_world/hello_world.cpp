/*
 * =====================================================================================
 *
 *       Filename:  hello_world.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/18/2026 07:19:07 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <hip/hip_runtime.h>
#include <stdio.h>
__global__ void gpuHello() {
    int tid = blockIdx.x*blockDim.x+threadIdx.x;
   printf("Hello World from thread %d\n",tid); 
} 

int main() {
    gpuHello<<<1,64>>>();
    hipDeviceSynchronize(); 
}
