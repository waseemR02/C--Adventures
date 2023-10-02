#include <iostream>

int counter(int n)
{
    int count{0};

    for(int i{1}; i*i < n+1; i++)
    
        count++;
    

    for(int i{1}; i*i*i < n+1; i++)
    {
        count++;
    }

    for(int i{1}; i*i*i*i*i*i < n+1; i++)
    {
        count--;
    }
    
    return count;
}


int main()
{   
    int i{};

    std::cin >> i;

    while(std::cin >> i)
    { int count =counter(i);
        std::cout << count << std::endl; 
    }
}

// https://codeforces.com/contest/1619/problem/B
