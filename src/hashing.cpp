#include "hashing.h"
#include <functional>

string hashing::hash (string const& path) {

    std::hash<std::string> string_hash;
    const size_t result = string_hash(path);

    return std::to_string(result);
}

bool hashing::checkHashes(const string& hash1, const string& hash2) {
    return hash1 == hash2;
}
