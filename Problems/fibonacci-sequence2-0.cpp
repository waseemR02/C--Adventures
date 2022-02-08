#include <iostream>

void fibonacci(int n)
{
    int term[99999];

    for(int i{1}; i < n+1; i++)
    {
        if(i < 3)
        {
            term[i] = 1;
        }
        else term[i] = term[i-2] +term[i-1];

        std::cout << term[i] << " ";
    }

}

int main()
{
    std::cout << "Number of Fibonacci sequence numbers: ";

    int n;
    std::cin >> n;  

    std::cout << "Fibonacci Sequence till "<< n << "th term: ";
    fibonacci(n);
    std::cout << "\n";
    return 0;
}
