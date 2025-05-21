#include <iostream>

#include "src/frequencyCounter.h"
#include "src/hashing.h"
#include "src/head.h"
#include "src/readFile.h"
using namespace std;

int main() {
    std:string path = "../testing.txt";

    cout << "Frequency Test" << endl;
    std::vector<std::pair<char, int>> chars = frequencyCounter::sorter(frequencyCounter::count(path));

    for (const auto & i : chars) {
        cout << i.first << " " << i.second << endl;
    };

    cout << endl << "Head Test" << endl;

    cout << head::generate(path); //  :392:e:226:i:164:t:164:a:156:o:145:n:129:r:127:s:111:l:79:h:77:d:66:g:65:u:64:c:61:m:53:.:48:f:45:b:39:p:34:,:32:y:30:w:29:k:21:20:v:20:":14:I:14:':11:D:10:H:9:j:7:x:7:N:6:T:6:G:5:-:5:!:4:S:3:q:3:z:3:W:3:P:3:A:3:Ç:2:ª:2:Γ:2:(:2:):2:?:2:B:2:C:1:F:1:::1:J:1:K:1:M:1:O:1;;

    cout << endl << "Read File Test" << endl;

    cout << readFile::read(path) << endl;

    cout << endl << "Hashing Test" << endl;

    cout << hashing::hash(path) << endl; // 17745710182501997447

    cout << endl << "Hashing Test #2" << endl;

    cout << hashing::checkHashes(hashing::hash(path), hashing::hash(path))  << endl; // 1

    cout << endl << "Convert Encrypted File to Tree Test" << endl;

    // cout << convertTree("../encryptedTesting.txt") << endl;

}
