#! /usr/bin/env bash
module load PrgEnv-cray
module load cray-mpich
module load cpe
module load craype-accel-amd-gfx90a
module load rocm
export MPICH_VERSION_DISPLAY=1
export LD_LIBRARY_PATH=$CRAY_LD_LIBRARY_PATH::${CRAY_MPICH_ROOTDIR}/gtl/lib::${LD_LIBRARY_PATH}
export MPICH_GPU_SUPPORT_ENABLED=1
