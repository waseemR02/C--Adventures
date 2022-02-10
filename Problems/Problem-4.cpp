#include <iostream>


int getInput()
{
    std::cout << "Enter an integer: ";

    int i{};
    std::cin >> i;

    return i;
}

bool isEven(int x)
{
    return (x % 2) == 0;
}

int main()
{
    int num{getInput()};
    
    if(isEven(num))
        std::cout << num << " is even\n";
    else
        std::cout << num << " is odd\n";

    return 0;
}