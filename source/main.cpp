#include <3ds.h>
#include <stdio.h>

#include "../include/gui.hpp"

int main() {

    gfxInitDefault();
    consoleInit(GFX_TOP, NULL);

    drawMainMenu();

    while (aptMainLoop()) {

        hidScanInput();

        u32 kDown = hidKeysDown();

        if (kDown & KEY_START)
            break;

        if (kDown & KEY_A) {

            printf("\nImporting Unity game...\n");
        }

        if (kDown & KEY_B) {

            printf("\nImporting Godot game...\n");
        }

        if (kDown & KEY_X) {

            printf("\nConverting assets...\n");
        }

        if (kDown & KEY_Y) {

            printf("\nBuilding CIA...\n");
        }

        gfxFlushBuffers();
        gfxSwapBuffers();
        gspWaitForVBlank();
    }

    gfxExit();
    return 0;
}
