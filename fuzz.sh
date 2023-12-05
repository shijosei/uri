#!/bin/bash
rm -rf build \
&& rm -rf output \
&& mkdir build \
&& cd build \
&& cmake -DCMAKE_C_COMPILER=afl-cc -DCMAKE_CXX_COMPILER=afl-g++ .. \
&& make \
&& afl-fuzz -i ../input -o ../output ./aufgabe1 
