#ifndef TREECONVERTER_H
#define TREECONVERTER_H

#include <string>
using namespace std;

//#include "Btree.h"

struct node
{ 
    string key;
	int code;   
};

string convertTree (string const& path);


#endif //TREECONVERTER_H