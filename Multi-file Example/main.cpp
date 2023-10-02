#include <iostream> 

int getValueFromUser();
int add(int x , int y);

int main()
{
    int num1(getValueFromUser());
    int num2(getValueFromUser());

    std::cout << num1 << " + " << num2 << " = " << add(num1,num2) << ".\n";

    return 0;
}