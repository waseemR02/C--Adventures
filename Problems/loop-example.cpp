#include <iostream>

void naturalNumbers(int n)
{
    for (int i{1}; i <= n; i++)
    {
        if (i == n)
        {
            std::cout << n << ".";
        }
        else
        {
            std::cout << i << ", ";
        }
    }
}

void sumOfNaturalNos(int n)
{
    int sum{};

    for (int i{1}; i <= n; i++)
    {
        sum = sum + i;
    }

    std::cout << "\n"
              << "\n"
              << "the sum of natural numbers upto " << n << " is " << sum << "\n"
              << "\n";
}

void mutliplicationTable(int n)
{
    std::cout << "\n";
    for (int i{1}; i < 11; i++)
    {
        std::cout << n << " x " << i << " = " << n * i << "\n";
    }
}


int main()
{
    std::cout << "Enter an integer: ";

    int n;
    std::cin >> n;
    
    naturalNumbers(n);
    sumOfNaturalNos(n);
    mutliplicationTable(n);

    return 0;
}
