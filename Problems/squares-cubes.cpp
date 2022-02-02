#include <iostream>

int squares(int n)
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
    std::cout << "Enter the limit: ";

    int n;
    std::cin >> n;
    
    std::cout << "Number of squares and cubes is " << squares(n) << "\n";
    return 0;
}