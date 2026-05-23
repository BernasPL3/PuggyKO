#include <3ds.h>
#include <stdio.h>

#include "../include/gui.hpp"

void drawTopBar() {

    printf("========================\n");
    printf("      PuggyK.O 🐶\n");
    printf("========================\n\n");
}

void drawMainMenu() {

    consoleClear();

    drawTopBar();

    printf("[A] Import Unity Game\n");
    printf("[B] Import Godot Game\n");
    printf("[X] Convert Assets\n");
    printf("[Y] Build CIA\n\n");

    printf("START = Exit\n");
}

void drawBottomScreen() {

    printf("\nReady.\n");
}
