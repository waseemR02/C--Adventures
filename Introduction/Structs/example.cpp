#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

struct student
{
    int age, std;
    string first_name,last_name;
};


int main()
{
    student student1;
    cin >> student1.age 
        >> student1.first_name
        >> student1.last_name
        >> student1.std;
    cout << student1.age << " "
        << student1.first_name << " "
        << student1.last_name << " "
        << student1.std;

    return 0;
}