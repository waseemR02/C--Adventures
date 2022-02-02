#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";

    int input;
    std::cin >> input;

    return input;

}

int main()
{
    int x{getValueFromUser()};

    std::cout << "Double of " << x << " is " << x * 2 << ".\n";
    std::cout << "Triple of " << x << " is " << x * 3 << ".\n";
    
    return 0;

}