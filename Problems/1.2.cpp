#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";

    int input;
    std::cin >> input;

    return input;

}

void doPrint(int x)
{
    std::cout << "Double of " << x << " is " << x * 2 << ".\n";
    std::cout << "Triple of " << x << " is " << x * 3 << ".\n";

}

int main()
{
    doPrint(getValueFromUser());
}