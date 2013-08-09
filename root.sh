#!/bin/csh
setenv LD_LIBRARY_PATH /global/project/projectdirs/pdsf/amct/hopper/root/lib/:/common/nsg/sge/ge-8.1.2/lib/lx-amd64:/common/usg/lib/
setenv PATH ${PATH}:/global/project/projectdirs/pdsf/amct/hopper/root
source bin/thisroot.csh
root -b -q /global/project/projectdirs/pdsf/amct/hopper/root/macros/proof.c 
