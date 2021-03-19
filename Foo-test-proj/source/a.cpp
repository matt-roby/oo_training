#include "a.h"
#include <iostream>
#include <optional>
#include <string>

void A::go()
{
    auto message{ std::optional<std::string>{ std::in_place, "a" } };

    if (message)
    {
        std::cout << *message << std::endl;
    }
}
