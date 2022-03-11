// Greedy Algorithm

#include <iostream>

using namespace std;

int get_cents()
{
    int x;
    do
    {
        printf("Amount Owed: ");
        scanf("%d", &x);
    } while (x < 0);
    
    return x;
}

int calculate_quarters(int &x)
{
    int noOfQuarters = x/25;

    x = x%25;

    return noOfQuarters;
}

int calculate_dimes(int &x)
{
    int noOfdimes = x/10;

    x = x%10;

    return noOfdimes;
}

int calculate_nickels(int &x)
{
    int noOfnickels = x/5;

    x = x%5;

    return noOfnickels;
}

int calculate_pennies(int &x)
{
    return x;
}

int main()
{
    // get the amount that is owed to the customer
    int amt{get_cents()};

    // calculating the total number of coins to be distributed in the most optimal way
    int result = calculate_quarters(amt) + calculate_dimes(amt) + calculate_nickels(amt) + calculate_pennies(amt);

    printf("Total coins to be paid: %i", result);

    return 0;
}