/* Write a program that asks the user to enter a number, and then enter a second number. The program should tell the user what the result of adding and subtracting the two numbers is.

The output of the program should match the following (assuming inputs of 6 and 4):

Enter an integer: 6
Enter another integer: 4
6 + 4 is 10.
6 - 4 is 2. */

#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";

    int input1{};
    std::cin >> input1;

    std::cout << "Enter another integer: ";

    int input2{};
    std::cin >> input2;

    std::cout << input1 << " + " << input2 << " is " << input1 + input2 << ".\n";
    std::cout << input1 << " - " << input2 << " is " << input1 - input2 << ".\n";

    return 0;

}