#! /bin/bash

OPENVR_VERSION_TAG=$1

cd third || exit
rm -rf openvr
git clone --no-checkout --depth=1 --filter=tree:0 https://github.com/ValveSoftware/openvr.git
cd openvr || exit
git sparse-checkout set --no-cone /bin /headers /lib
git checkout "$OPENVR_VERSION_TAG"
rm -rf .git
