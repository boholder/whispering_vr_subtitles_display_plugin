#! /bin/bash

OPENVR_VERSION_TAG="v2.12.14"
SPDLOG_VERSION_TAG="v1.17.0"

./scripts/update_openvr.sh $OPENVR_VERSION_TAG
./scripts/update_spdlog.sh $SPDLOG_VERSION_TAG
./scripts/update_rawdraw.sh
