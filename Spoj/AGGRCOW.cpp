#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int check(int mid, int stalls[], int c, int n)
{
    int cowsPlaced{1}, pos = stalls[0];
    for (int  i = 1; i < n; i++)
    {
        if (stalls[i] - pos >= mid)
        {
            pos = stalls[i];
            cowsPlaced++;
        }
        if (cowsPlaced == c)
        {
            return 1;
        }
    }
    return 0;
    
}

int binarySearch( int arr[], int n, int c)
{
    sort(arr, arr + n);
    int lo = arr[0], hi = arr[n-1], minD = -1;
    while (lo <= hi)
    {
        int mid = lo + (hi -lo)/2;

        if(check(mid, arr,c,n))
        {
            minD = mid;
            lo = mid + 1;
        }
        else
            hi =mid -1;
    }
    return minD;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n{},c{};
        cin >> n >> c ;
        int stalls[n];

        for (int i = 0; i < n; i++)
        {
            cin >> stalls[i];
        }
        int x = binarySearch(stalls, n, c);

        cout << endl << x;
    }
    
}

// https://www.spoj.com/problems/AGGRCOW/
