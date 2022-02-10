#include <iostream>
#include <iomanip>

double getInput()
{
    std::cout << "Enter a double value: ";

    double d{};
    std::cin >> d;

    return d;
}

char getOperator()
{
    std::cout << "Enter one of the following: +, -, x or /: ";

    char c{};
    std::cin >> c;

    return c;
}

void result(double d1, double d2, char c)
{   
    std::cout << std::setprecision(16);

    if (c == '+')
        std::cout << d1 << " + " << d2 << " is " << d1 + d2 << std::endl;
    else if (c == '-')
        std::cout << d1 << " - " << d2 << " is " << d1 - d2 << std::endl;
    else if (c == 'x')
        std::cout << d1 << " x " << d2 << " is " << d1 * d2 << std::endl;
    else if (c == '/')
        std::cout << d1 << " / " << d2 << " is " << d1 / d2 << std::endl;
}

int main()
{
    double num1{getInput()};
    double num2{getInput()};

    result(num1, num2, getOperator());

    return 0;
}

/*Write the following program: The user is asked to enter 2 floating point numbers (use doubles).The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.The program computes the answer on the two numbers the user entered and prints the results.If the user enters an invalid symbol, the program should print nothing.*/