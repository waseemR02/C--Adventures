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

    int x{},y{};
    string side,current;

    int payment{};

    for (int i = 0; i < noOfMoves; i++)
    {
        if(s[i] == 'R')
        {
            x++;
        }    
        
        if (s[i] == 'U')
        {
            y++;
        }
        if (x > y)
        {
            current = "right";
        }
        else if (y > x)
        {
            current = "left";
        }
        if (side != current)
        {
            side = current;
            payment++;
        }
    }
    cout << payment - 1;

    return 0;
}
// https://codeforces.com/contest/935/problem/B