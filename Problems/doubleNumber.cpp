#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";

    int input;
    std::cin >> input;

    return input;
}

int doubleNumber(int x)
{
    return x * 2;
}

int main()
{
    int num(getValueFromUser());
    std::cout << "Double of " << num << " is " << doubleNumber(num) << ".\n";
    
    return 0;
}