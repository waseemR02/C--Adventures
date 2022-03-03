#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;

    cout << s1.length() << " " << s2.length();

    cout << "\n" << s1 + s2 << "\n"; //concatenation of strings

    char temp{s1[0]};
    s1[0] = s2[0];
    s2[0] = temp;

    cout << s1 << " " << s2;

    return 0;
}