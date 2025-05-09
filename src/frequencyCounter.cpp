#include "frequencyCounter.h"
#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>

using namespace std;

// loop through entire file one by one
// incremeent frequency in map
// sort into set at the end depending on frequency
map<char, int> count(string path)
{
    map<char, int> freq;
    for(int i = 0; i<path.length; i++)
    {
        freq[path[i]]+=1;
    } 
    return freq;   
}

map<char, int> sorter(map<char, int> freq)
{
    vector<pair<char, int>> sorted(freq.begin(), freq.end());

    sort(sorted.begin(), sorted.end(), [](auto& a, auto& b) {
        return a.second > b.second;
    });
    return freq;
}

    
    
    

