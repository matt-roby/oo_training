#include "test.h"
#include <iostream>
#include <optional>
#include <string>

void TestClass::tester(int argc, char* argv[]) 
{
    std::optional<std::string> value; // introduced in C++17

    if (argc >= 2)
    {
        value = argv[1];
    }

    if (value)
    {
        std::cout << *value << std::endl;
    }
    else
    {
        std::cout << "No args prrovided" << std::endl;
    }
}


