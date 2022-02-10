#include <iostream>

int getInput()
{
    std::cout << "Enter a number between 0 to 255: ";

    int x{};
    std::cin >> x;

    return x;
}

int decimalToBit(int i , int digitValue)
{
    if(i >= digitValue)
    {   
        std::cout << 1;
        return (i - digitValue);
    }  
    else 
        std::cout << 0;
        return i;
}

int main()
{   
    int x{getInput()};

    x = decimalToBit(x, 128);
    x = decimalToBit(x, 64);
    x = decimalToBit(x, 32);
    x = decimalToBit(x, 16);
    x = decimalToBit(x, 8);
    x = decimalToBit(x, 4);
    x = decimalToBit(x, 2);
    x = decimalToBit(x, 1);

    std::cout << '\n';

    return 0;
}
/*Write a program that asks the user to input a number between 0 and 255. Print this number as an 8-bit binary number (of the form #### ####). Don’t use any bitwise operators. Don’t use std::bitset.*/