#include <iostream>
#include "Array.hpp"

#define MAX_VAL 5

int main(void)
{
    Array<int> numbers(MAX_VAL);
    for (uint i = 0; i < numbers.size(); i++)
        numbers[i] = i + 1;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    for (uint i = 0; i < numbers.size(); i++)
        std::cout << "numbers [" << i << "]: " << numbers[i] << std::endl;
    return 0;
}