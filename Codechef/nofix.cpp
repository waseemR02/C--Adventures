#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int arr[n + 1];
        for (int i = 1; i < n + 1; i++)
        {
            cin >> arr[i];
        }
        
        int count{};
        for (int i = 1; i < n + 1; i++)
        {
            if (arr[i] == i + count)
            {
                count++;
            }
            
        }
        cout << count << endl;
    }
}
// https://www.codechef.com/FEB222C/problems/NOFIX
