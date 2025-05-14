//
// Created by jlozi on 5/12/2025.
//

#include "head.h"

#include "frequencyCounter.cpp"

unsigned char head::generate(std::string const &path) {
     std::vector<std::pair<char, int>> chars = frequencyCounter::sorter(frequencyCounter::count(path));

    unsigned char buffer[chars.size() * 4 + 1];

     for (int i = 0; i < chars.size(); i++) {
         std::cout << chars[i].first;

         buffer[i * 4] = chars[i].first;
         buffer[i * 4 + 1] = ':';
         buffer[i * 4 + 2] = chars[i].second;
         buffer[i * 4 + 3] = ':';
     }

    buffer[chars.size() * 4 - 4] = ';';
    buffer[chars.size() * 4 - 3] = ';';

    return *buffer;
}
