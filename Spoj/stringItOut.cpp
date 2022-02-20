#include <iostream>
#include <string>
#include <bits/stdc++.h>

int binarySearch(std::string str, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
  
        // If the element is present at the middle
        // itself
        if (str[mid] == x)
            return mid;
  
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (str[mid] > x)
            return binarySearch(str, l, mid - 1, x);
  
        // Else the element can only be present
        // in right subarray
        return binarySearch(str, mid + 1, r, x);
    }
  
    // We reach here when element is not
    // present in array
    return -1;
}

void sortString(std::string &str)
{
   sort(str.begin(), str.end());
}

bool isSubsequence(std::string c, std::string d)
{
    int m{static_cast<int>(c.length())};
    

    for(int i{}; i < m; i++)
    {
        int n{static_cast<int>(d.length())};
        int pos = binarySearch(d, 0, n , c[i]);

        if(pos == -1)
            return false;
        d.erase(d.begin() + pos);
    }
    return true;
}

std::string deleteChars(std::string c, std::string d) 
{
    int m{static_cast<int>(c.length())};
    // int n{static_cast<int>(d.length())};

    for(int i{}; i < m; i++)
    {   
        int n{static_cast<int>(d.length())};
        int pos = binarySearch(d, 0, n , c[i]);

        d.erase(d.begin() + pos);
    }
    
    return d;
}

int main()
{
    int x{};
    std::cin >> x;
    std::string c{};
    
    sortString(c);
    
    while(std::cin >>  c)

    {   
        sortString(c);
        std::string d{};
        std::cin >> d;

        sortString(d);

        int M{};
        for(int i{}; isSubsequence(c,d); i++)
        {
            d = deleteChars(c,d);
            M++;
        }
        std::cout << M << std::endl;
    }
}

// https://www.spoj.com/problems/SUBS/
