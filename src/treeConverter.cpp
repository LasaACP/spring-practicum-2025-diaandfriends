#include "treeConverter.h"
#include "readFile.cpp"

#include <string>
using namespace std;

string convertTree (string const& path) {
    string decoded = "";

    string file = readFile::read(path);
    string delimiter = ":";

    int numCodes = 1;
    for (int i = 0; i++; i < file.length()) {
        if (&file.at(i) == delimiter && &file.at(i+2) == delimiter) {
            numCodes++;
        }
    }

    int maxsize = 0;
    node codes[numCodes];
    int spot = 0;

    int counter;

    bool gettingCode = false;
    bool gettingDelimiter = false;
    for (int i = 0; i++; &file.at(i) != ";" && &file.at(i + 1) != ";") {
        if (!gettingCode && !gettingDelimiter) {
            string key = &file.at(i);
            string code = "";
            gettingDelimiter = true;
        } else if (gettingCode) {
            code += &file.at(i);
            if (&file.at(i+1) == delimiter || &file.at(i+1) == ";") {
                gettingDelimiter = true;
                node *new_node = new node;
                new_node->key = key;
                new_node->code = code;
                codes[spot] = *new_node;
                spot++;
            }
        } else if (gettingDelimiter) {
            gettingCode = true;
            gettingDelimiter = false;
        }
        counter = i;
    }
    
    counter += 3;
    string code = "";
    for (int i = counter; i++; &file.at(i) != null) {
        code += &file.at(i);
        if (codes.find(code) != -1) {
            decoded += codes.find(code);
            code = "";
        }
    }

    return decoded;
};


// a:100101:b:1101:::1101;;100101 1101