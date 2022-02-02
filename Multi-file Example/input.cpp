#include <iostream>

int getValueFromUser ()
{
    std::cout << "Enter an integer: ";
    
    int a{};
    std::cin >> a;

    return a;
}