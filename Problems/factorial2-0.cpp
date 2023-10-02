#include <iostream>

int factorial(int n)
{
    if(n < 2)
    {
        return 1;
    }
    
    return n*factorial(n-1);
}

int main()
{
    std::cout << "Enter an integer: ";

    int x;
    std::cin >> x;

    std::cout << x << "! = " << factorial(x) << "\n";

    return 0;
}

// using recursions
