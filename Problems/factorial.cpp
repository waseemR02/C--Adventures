#include <iostream>

int factorial(int);

int main()
{
    std::cout << "Enter an integer: ";

    int x;
    std::cin >> x;

    std::cout << "The factorial of " << x << " is " << factorial(x) << "\n";

    return 0; 

}

int factorial(int a)
{
    int result{1};

    for(int i = a; i > 0; i--)
    {
        result = result*i;
    }

    return result;
}