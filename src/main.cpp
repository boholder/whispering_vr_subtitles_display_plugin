// Make it so we don't need to include any other C files in our build.
#define CNFG_IMPLEMENTATION

#include "rawdraw_sf.h"

void HandleKey( int keycode, int bDown ) {}
void HandleButton( int x, int y, int button, int bDown ) {}
void HandleMotion( int x, int y, int mask ) {}
int HandleDestroy()
{ return 0; }

int main()
{
    CNFGSetup( "Example App", 256, 256 );
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
