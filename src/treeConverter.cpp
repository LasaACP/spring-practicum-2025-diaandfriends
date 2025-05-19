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
        if (file.get(i) == delimiter && file.get(i+2) == delimiter) {
            numCodes++;
        }
    }

    int maxsize = 0;
    node codes[numCodes];
    int spot = 0;

    int counter;

    bool gettingCode = false;
    bool gettingDelimiter = false;
    for (int i = 0; i++; file.get(i) != ";" && file.get(i + 1) != ";") {
        if (!gettingCode && !gettingDelimiter) {
            string key = file.get(i);
            string code = "";
            gettingDelimiter = true;
        } else if (gettingCode) {
            code += file.get(i);
            if (file.get(i+1) == delimiter || file.get(i+1) == ";") {
                gettingDelimiter = true;
                struct node new_node = new node; 
                new_node.key = key;
                new_node.code = code;
                codes[spot] = new_node;
                spot++;
            }
        } else if (gettingDelimiter) {
            gettingCode = true;
            gettingDelimiter = false;
        }
        counter = i;
    }
    
    counter += 3;
    string code = ""
    for (int i = counter; i++; file.get(i) != null) {
        code += file.get(i);
        if (codes.find(code) != -1) {
            decoded += codes.find(code);
            code = "";
        }
    }

    return decoded;
};


// a:100101:b:1101:::1101;;100101 1101