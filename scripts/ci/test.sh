#!/bin/bash
set -e

CMAKE_DIR=cmake-build-debug

if [ ! -d "$CMAKE_DIR" ]; then
  mkdir "$CMAKE_DIR"
fi
cd "$CMAKE_DIR"

cmake ..
make

cd ../bin/test

for file in ./*
do
  ${file}
done

cd ..
