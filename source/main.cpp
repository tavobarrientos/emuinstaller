#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <3ds.h>

#include "utils/files.h"
#include "includes/cia/cia.h"
#include "core/output.h"
#include "core/core.h"

int main(int argc, char* argv[])
{
	gfxInitDefault();
	PrintConsole bottomScreen;
	// Write Console in Bottom Screen
	consoleSelect(consoleInit(GFX_BOTTOM, &bottomScreen));
	Output output;
	Core core(&output);

	// mkpath("/emuinstaller", 0777);
	// mkpath("/emuinstaller/tmp", 0777);
	// Main loop
	while (aptMainLoop())
	{
        hidScanInput();
		
		u32 downEvent = hidKeysDown();
		u32 heldEvent = hidKeysHeld();

		gspWaitForVBlank();
	}

	gfxExit();
	return 0;
}
