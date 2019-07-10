#include <iostream>

#include "02_barebone.hpp"

namespace BUILDER {
void Barebone::process()
{
    std::ostringstream oss;
    oss << "<ul>";

    for_each(words.begin(), words.end(), [&oss](auto w) {
        oss << " <li>" << w << "</li> ";
    });
    oss << "</ul>";

    std::cout << oss.str().c_str() << std::endl;

    return;
}
}