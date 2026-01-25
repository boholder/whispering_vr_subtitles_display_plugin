// Get all of rawdraw
#define CNFG_IMPLEMENTATION
// Let CNFG uses opengl
#define CNFGOGL
// Include CNFG (rawdraw) for generating a window and/or OpenGL context.
#include "rawdraw_sf.h"

// CNFG requires these functions to exist
void HandleKey( int keycode, int bDown ) {}
void HandleButton( int x, int y, int button, int bDown ) {}
void HandleMotion( int x, int y, int mask ) {}
int HandleDestroy()
{ return 0; }

#include "openvr.h"

// logger
#include "spdlog/spdlog.h"

int main()
{
    CNFGSetup( "Whispering VR Subtitles Display", -256, -256 );

    {
        vr::EVRInitError ierr;
        vr::IVRSystem* pVRSystem = vr::VR_Init( &ierr, vr::VRApplication_Overlay );
        if ( !pVRSystem )
        {
            spdlog::error( "Could not initialize OpenVR: {}", vr::VR_GetVRInitErrorAsEnglishDescription( ierr ) );
            return 1;
        }
    }

    while ( CNFGHandleInput() )
    {
        CNFGBGColor = 0x000080ff; // Dark Blue Background
        CNFGClearFrame();

        // Change color to white.
        CNFGColor( 0xffffffff );

        CNFGPenX = 1;
        CNFGPenY = 1;
        CNFGDrawText( "Hello, World", 2 );

        // Display the image and wait for time to display next frame.
        CNFGSwapBuffers();
    }
}
