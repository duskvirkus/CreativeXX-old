#!/bin/bash

mkdir cmake-build-debug
cd cmake-build-debug

cmake ..
make

cd ../bin/test

for file in ./*
do
  exec ${file} &
done

cd ..
