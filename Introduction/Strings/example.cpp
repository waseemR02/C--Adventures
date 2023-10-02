#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";

    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";

    int age{};
    std::cin >> age;

    std::cout << "Your age + length of name is: " << age + static_cast<int>(name.length()) << std::endl;

    return 0;
}

// Write a program that asks the user to enter their full name and their
//  age. As output, tell the user the sum of their age and the number of 
// letters in their name. For simplicity, count spaces in the name as a 
// letter.
  