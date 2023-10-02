#include <iostream>

int getValueFromUser()
{
    int input;
    std::cin >> input;

    return input;
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{getValueFromUser()};

    std::cout << "Enter another integer: ";
    int y{getValueFromUser()};

    std::cout << x << " + " << y << " is " << x + y << ".\n";
    std::cout << x << " - " << y << " is " << x - y << ".\n";

    return 0;

}