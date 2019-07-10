#include <iostream>
#include <string>
#include <vector>

#include "02_barebone.hpp"

int main() {
    std::vector<std::string> words = { "hello", "world" };

    auto barebone = BUILDER::Barebone(words);
    barebone.process();

    return 0;
}