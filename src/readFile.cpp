//
// Created by jlozi on 5/9/2025.
//

#include "readFile.h"

#include <fstream>

string readFile::read(string const& path) {
    std::ifstream stream(path);

    return {
        std::istreambuf_iterator<char>(stream),
        std::istreambuf_iterator<char>()
    };
}


char readFile::readBinary(string const& path) {
    std::ifstream stream(path);

    return std::istreambuf_iterator<char>(stream);
}