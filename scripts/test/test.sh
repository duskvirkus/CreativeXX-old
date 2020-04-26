#!/bin/bash
set -e

while [[ $# -gt 0 ]]
do
key="$1"
shift
case $key in
    --ci)
    CI=1
    ;;
esac
done

if [ $CI ]
then
  echo "Testing running in continuous integration mode. (ci-on)"
else
  echo "Testing running in desktop mode. (ci-off)"
fi

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
  echo $file
  if [ "$file" = "./LinuxWindow.spec" ]
  then
    if [ $CI ]
    then
      echo "Skipping $file because it doesn't work in ci."
    else
      ${file}
    fi
  else
    ${file}
  fi
done

cd ..
