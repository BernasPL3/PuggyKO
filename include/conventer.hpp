#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <string>

bool checkFile(const std::string& path);

void convertUnityProject(
    const std::string& input,
    const std::string& output
);

void convertGodotProject(
    const std::string& input,
    const std::string& output
);

void buildCIA(
    const std::string& romfsPath
);

#endif
