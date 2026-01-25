#include "overlay.h"
#include "openvr.h"
#include "spdlog/spdlog.h"

vr::IVRSystem* vr_system;

void overlay::init()
{
    vr::HmdError hmd_err;
    if (vr_system = vr::VR_Init(&hmd_err, vr::VRApplication_Overlay); !vr_system)
    {
        spdlog::error("Could not initialize OpenVR: {}", vr::VR_GetVRInitErrorAsEnglishDescription(hmd_err));
        exit(1);
    }
    spdlog::info("OpenVR initialized successfully");
}
