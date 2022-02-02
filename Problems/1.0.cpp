
#include <iostream>

int main()
{
    std::cout << "Enter a integer: ";

    int input{}; 
    std::cin >> input;

    std::cout << "Double " << input << " is: " << input * 2 << "\n";
    std::cout << "Triple " << input << " is: " << input * 3 << "\n";

    return 0;

}

/* Modify the solution to the “best solution” program above so that it outputs like this 
(assuming user input 4):

Enter an integer: 4
Double 4 is: 8
Triple 4 is: 12 */

