#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t{};
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int sum{};
        int input;
        for (size_t i = 0; i < n; i++)
        {
            cin >> input;
            sum |= input;
        }
        
        cout << sum << endl;
    }
    
    return 0;
}