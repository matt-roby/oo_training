#include "b.h"
#include <iostream>

void B::go()
{
    []() { std::cout << "b" << std::endl; }();
}
