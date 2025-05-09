#include <map>
#include <vector>
#include <string>

class frequencyCounter {
public:
    std::map<char, int> count(const std::string& path);
    std::vector<std::pair<char, int> > sorter(const std::map<char, int>& freq);
};
