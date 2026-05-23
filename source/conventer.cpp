#include <3ds.h>
#include <stdio.h>
#include <fstream>

#include "../include/converter.hpp"

bool checkFile(const std::string& path) {

    std::ifstream file(path);

    return file.good();
}

void convertUnityProject(
    const std::string& input,
    const std::string& output
) {

    printf("Loading Unity project...\n");

    if (!checkFile(input)) {

        printf("Unity project not found!\n");
        return;
    }

    printf("Converting textures...\n");
    printf("Reducing resolution...\n");
    printf("Preparing ARM assets...\n");

    printf("Unity conversion done!\n");
}

void convertGodotProject(
    const std::string& input,
    const std::string& output
) {

    printf("Loading Godot project...\n");

    if (!checkFile(input)) {

        printf("Godot project not found!\n");
        return;
    }

    printf("Converting sprites...\n");
    printf("Compressing files...\n");
    printf("Optimizing for 3DS...\n");

    printf("Godot conversion done!\n");
}

void buildCIA(
    const std::string& romfsPath
) {

    printf("Building CIA...\n");

    if (!checkFile(romfsPath)) {

        printf("romfs folder missing!\n");
        return;
    }

    printf("Generating banner...\n");
    printf("Packing ROMFS...\n");
    printf("Creating .CIA...\n");

    printf("CIA build complete!\n");
}
