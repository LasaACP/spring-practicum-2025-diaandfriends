#ifndef READFILE_H
#define READFILE_H
#include <string>

using namespace std;

class readFile {
public:
    static string read(string const& path);
    static std::istreambuf_iterator<char> readBinary(string const &path);
};

#endif //READFILE_H
