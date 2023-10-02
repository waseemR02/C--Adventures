#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int noOfMoves;
    cin >> noOfMoves;

    string s;
    cin >> s;

    int x{}, y{};

    int M{};
    
    bool gate;

    for (int i = 0; i < noOfMoves; i++)
    {
        if (s[i] == 'U')
        {
            y++;
        }
        if (s[i] == 'R')
        {
            x++;
        }
        if (x == y)
        {
            gate = true;
        }
        
        if ((x > y || y > x) && gate == 1 && s[i] == s[i-1])
        {
            M++;
            gate = false;
            continue;
        }
        if ((x > y || y > x) && gate == 1 && s[i] != s[i-1])
        {
            gate = false;
        }
        
    }
    cout << M;

    return 0;
}
// https://codeforces.com/contest/935/problem/B