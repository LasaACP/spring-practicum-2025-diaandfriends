//
// Created by jlozi on 5/12/2025.
//

#include "head.h"

#include <iostream>
#include <sstream>

#include "frequencyCounter.h"

std::string head::generate(std::string const &path) {
     std::vector<std::pair<char, int>> chars = frequencyCounter::sorter(frequencyCounter::count(path));

    std::stringstream ss;

    for (size_t i = 0; i < chars.size(); ++i) {
        ss << chars[i].first << ":" << chars[i].second << ":";
    }

    std::string result = ss.str();
    if (!result.empty()) {
        result.pop_back();
        result += ";;";
    }

    return result;
}
