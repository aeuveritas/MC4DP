#ifndef __BUILD_BAREBONE_HPP__
#define __BUILD_BAREBONE_HPP__

#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

namespace BUILDER {
class Barebone
{
public:
    Barebone(std::vector<std::string>& input)
        : words(input)
    {};

    void process();

private:
    std::vector<std::string>& words;
};
} // namespace BUILDER

#endif // __BUILD_BAREBONE_HPP__