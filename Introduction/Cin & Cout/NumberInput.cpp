#include <iostream> //iostream for std::cout and std::cin

int main()
{
    int x{}; // define variable x to hold user input (and zero-initialize it)
    int y{}; // define variable y to hold user input (and zero-initialize it)

    std::cout << "Enter two numbers: ";

    std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    std::cout << "You have entered " << x << " and " << y << "\n";
    return 0;
}