#ifndef HASHING_H
#define HASHING_H

#include <string>

using namespace std;

class hashing {
    public:
        static string hash(string const& path);
        static bool checkHashes(const string& hash1, const string& hash2);
};



#endif //HASHING_H
