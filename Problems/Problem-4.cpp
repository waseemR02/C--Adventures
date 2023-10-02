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

// Write a program that asks the user to input an integer, and tells the user whether the number is even or odd. Write a function called isEven() that returns true if an integer passed to it is even, and false otherwise. Use the modulus operator to test whether the integer parameter is even.
