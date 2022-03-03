#include <iostream>
#include <math.h>
#include <vector>
#include <sstream>

using namespace std;

class student
{
    private:
        int age,std;
        string first_name,last_name;
    
    public:
        void set_age(int a)
        {
            age = a;
        }
        void set_first_name(string s)
        {
            first_name = s;
        }
        void set_last_name(string s)
        {
            last_name = s;
        }
        void set_standard(int a)
        {
            std = a;
        }
        int get_age()
        {
            return age;
        }
        int get_standard()
        {
            return std;
        }
        string get_first_name()
        {
            return first_name;
        }
        string get_last_name()
        {
            return last_name;
        }
        string to_string(int a, string s1, string s2, int b)
        {
            stringstream ss;
            char ch{','};
            ss << a << ch << s1 << ch << s2 << ch << b; 
            string result;
            ss >> result;
            
            return result;
        }
};

int main()
{
    student r1;

    int age,std;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> std;

    r1.set_age(age); r1.set_first_name(first_name); r1.set_last_name(last_name); r1.set_standard(std);

    cout << r1.get_age() << "\n"
        << r1.get_last_name() << ", " << r1.get_first_name() << "\n"
        << r1.get_standard() << endl << endl
        << r1.to_string(age, first_name, last_name, std);

    return 0;
}