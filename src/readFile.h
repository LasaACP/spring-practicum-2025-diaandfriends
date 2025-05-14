#ifndef READFILE_H
#define READFILE_H
#include <string>

using namespace std;

class readFile {
    static string read(string const& path);
    static string readBinary(string const& path);
};

#endif //READFILE_H
