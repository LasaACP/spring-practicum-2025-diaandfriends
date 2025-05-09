//
// Created by jlozi on 5/7/2025.
//

#ifndef frequencyCounter_H
#define frequencyCounter_H

#include <map>

using namespace std;


class frequencyCounter {
    public:
        map<char, int> count(string path);
        map<char, int> sort(map<char, int> freq);
};



#endif //frequencyCounter_H
