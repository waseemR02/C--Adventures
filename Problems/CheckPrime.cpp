#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a number: ";
    
    int n, i;
    cin >> n;

    if(n == 1)
    {
        cout << "Neither Prime not Composite" << endl;
    }

    for ( i = 2; i < n; i++)
    {
        if (n%i == 0)
        {
            cout << "Not Prime" << endl;
            return 0;
        }
    }
    if (i == n)
    {
        cout << "Prime" << endl;
    }
    
    return 0;
}