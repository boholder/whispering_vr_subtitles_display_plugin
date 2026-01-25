#! /bin/bash

VERSION_TAG=$1

cd third || exit
rm -rf spdlog
git clone --depth=1 --branch "$VERSION_TAG" https://github.com/gabime/spdlog.git
cd spdlog || exit
mkdir build && cd build || exit
cmake .. && cmake --build . && cp "libspdlog.a" ".."
cd ..
find . -maxdepth 1 ! -name "libspdlog.a" ! -name "include" -exec rm -rf {} +
