#! /bin/bash

VERSION_TAG=$1

cd third || exit
if [ -e spdlog ];then
  rm -rf spdlog
fi
git clone --depth=1 --branch "$VERSION_TAG" https://github.com/gabime/spdlog.git
cd spdlog && mkdir build && cd build || exit
cmake .. && cmake --build . && cp "libspdlog.a" ".."
cd ..
find . -maxdepth 1 ! -name "libspdlog.a" ! -name "include" -exec rm -rf {} +
