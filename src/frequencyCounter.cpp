#include "frequencyCounter.h"
#include <fstream>
#include <vector>
#include <algorithm>
#include <iostream>

std::map<char, int> frequencyCounter::count(const std::string& path) {
    std::ifstream file(path);
    std::map<char, int> freq;

    if (!file) {
        std::cerr << "Could not open file: " << path << std::endl;
        return freq;
    }

    char ch;
    while (file.get(ch)) {
        freq[ch]++;
    }

    return freq;
}

std::vector<std::pair<char, int>> frequencyCounter::sorter(const std::map<char, int>& freq) {
    std::vector<std::pair<char, int>> vec(freq.begin(), freq.end());

    std::sort(vec.begin(), vec.end(),
              [](const std::pair<char, int>& a, const std::pair<char, int>& b) {
                  return a.second > b.second;
              });

    return vec;
}
