#include <iostream>

int term(int n)
{
    if(n < 3)
    {
        return 1;
    }
    return term(n - 2) + term(n - 1);
}

void fibonacci(int x)
{   
    
    for(int i{1}; i < x + 1; i++)
    {
        std::cout << term(i)<< " ";
    }
}



int  main()
{   
    std::cout << "Number of Fibonacci sequence numbers: ";

    int n;
    std::cin >> n;  

    std::cout << "Fibonacci Sequence till "<< n << "th term: " ;
    fibonacci(n);
    
    std::cout << "\n";          

    return 0;
}