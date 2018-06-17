#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <3ds.h>

#include "utils/files.h"

int main(int argc, char* argv[])
{
	gfxInitDefault();
	consoleInit(GFX_TOP, NULL);

	mkpath("/emuinstaller", 0777);
	mkpath("/emuinstaller/tmp", 0777);
	
	// Main loop
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		gfxSwapBuffers();
		hidScanInput();

		// Your code goes here
		u32 kDown = hidKeysDown();
		if (kDown & KEY_START)
			break; // break in order to return to hbmenu
	}

	gfxExit();
	return 0;
}
