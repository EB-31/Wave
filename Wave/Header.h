#pragma once
#include <iostream>

void foo(int a)
{
    for (int i(0); i < a; i++)
    {
        std::cout << "hi" << "  ";
    }
    std::cout << std::endl << "Your number is " << a;
}   