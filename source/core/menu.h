#pragma one

#ifndef __MENU_H_ICLUDED__
#define __MENU_H_ICLUDED__

#include <3ds.h>
#include <string>
#include <vector>
#include <stdio.h>

#include <stdint.h>
#include <stddef.h>

#include "../includes/utils.h"

typedef struct ConsoleMenu {
	PrintConsole menuConsole;
} ConsoleMenu;

extern ConsoleMenu currentMenu;
void init_menu(gfxScreen_t screen);

#endif