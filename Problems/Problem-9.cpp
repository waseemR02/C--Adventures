#include <iostream>
#include <cmath>

int getInput()
{
    std::cout << "Enter a number between 0 to 255: ";

    int x{};
    std::cin >> x;

    while (x < 0 || x > 255)
    {
        std::cout << "Invalid number!" << std::endl;
        std::cout << "Enter a number between 0 and 255: ";
        std::cin >> x;
    }

    return x;
}

void decimalToBit(int x)
{
    for(int i{7}; i >=0; i--)
    {   
        if (i == 3)
        {
            std::cout << "'";
        }

        if(x >= pow(2, i))
        {    
            std::cout << 1;
            x -= pow(2, i);
        }
        else
            std::cout << 0;

    }

    std::cout<< std::endl;
}

int main()
{
    decimalToBit(getInput());

    return 0;
}