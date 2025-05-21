#include <map>
#include <vector>
#include <string>

class frequencyCounter {
public:
    static std::map<char, int> count(const std::string& path);
    static std::vector<std::pair<char, int> > sorter(const std::map<char, int>& freq);
};
