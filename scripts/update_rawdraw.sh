#! /bin/bash

cd third || exit
mkdir -p rawdraw
cd rawdraw || exit
wget https://raw.githubusercontent.com/cntools/rawdraw/master/rawdraw_sf.h
