#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin >> t;
	
	while(t--)
	{
        int n;
        int arr[n];
        for(int i{0}; i < n; i++)
	        cin >> arr[i];
	    int max = 0;
	    bool occur[n];
	    
	    for(int i{0}; i < n-1; i++)
	    {
	        int count = 1;
	        for(int j{i+1}; j < n; j++)
	        {
	            if((arr[i] == arr[j]) && (occur[i] != true))
	            {
	                count++;
	                occur[i] = true;
	            }
	        }
	        if (count > max)
	           max = count;
	    }
	    
	    cout << max << endl;
	}
	
	return 0;
}
