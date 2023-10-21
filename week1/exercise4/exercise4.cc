#include <iostream>

namespace
{
    char const output[] =
R"*(
^\\s+Encryption key:(\w+)
^\\s+Quality=(\d+)
^\\s+E?SSID:"([[:print:]]+)"
^\\s+ssid="([[:print:]]+)"
)*";
}

int main()
{
    std::cout << "^\\s+Encryption key:(\\w+)"        << '\n' << 
                 "^\\s+Quality=(\\d+)"               << '\n' <<
                 "^\\s+E?SSID:\"([[:print:]]+)\""    << '\n' <<
                 "^\\s+ssid=\"([[:print:]]+)\""      << '\n';

    std::cout << output << '\n';
}

// MUST use delimiter *  in order for program to run, because otherwise
// RSL is ended prematurely due to presence of )" in third line.