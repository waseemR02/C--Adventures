#include <iostream>
#include <math.h>
#include <vector>
#include <sstream>

using namespace std;

vector<int> parseInts(string str)
{
    stringstream ss(str);

    int count{1};
    for (size_t i = 0; i < str.length(); i++)
    {
        if(str[i] == ',')
        {
            count++;
        }
    }
    

    char ch;
    vector<int> vec;

    for (size_t i = 0; i < count; i++)
    {
        int a;

        ss >> a >> ch;
        vec.push_back(a);
    }

    return vec;
} 

int main()
{
    string str;
    cin >> str;

    vector<int> vec = parseInts(str);

    for (size_t i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "\n";
    }
    

    return 0;
}