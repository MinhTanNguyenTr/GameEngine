#include "input.hpp"
#include <iostream>
#include <string>

char Input::getKey()
{
    std::string s;
    if(!std::getline(std::cin, s)) return '\0';
    if(s.empty()) return '\n';
    return s[0];
}