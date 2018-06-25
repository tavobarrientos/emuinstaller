#include "menu.h"
ConsoleMenu currentMenu;

void init_menu(gfxScreen_t screen)
{
    PrintConsole *currentConsole = consoleSelect(&currentMenu.menuConsole);
    consoleInit(screen, &currentMenu.menuConsole);

    consoleSelect(currentConsole);
}

void DrawString(const char*str, int x, int y, const char *color)
{
    currentMenu.menuConsole.cursorX = x;
    currentMenu.menuConsole.cursorY = y;

    printf("%s%s%s", color, str, CONSOLE_RESET);

    gfxFlushBuffers();
}