#include <iostream>

using namespace std;

int count(string s)
{
    int c{}, d{}, n{};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'C')
        {
            c++;
        }
        else if (s[i] == 'N')
        {
            n++;
        }
    }
    if (c > n)
    {
        return 60;
    }
    else if (c == n)
    {
        return 55;
    }
    else return 40;
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t{};
    cin >> t;

    while(t--)
    {   
        int x;
        cin >> x;

        string s{};
        cin >> s;

        int output =  x * count(s);
        cout << output << endl;
    }
}

// https://www.codechef.com/FEB222C/problems/WCC
