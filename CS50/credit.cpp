// Luhn’s Algorithm
#include <iostream>
#include <cmath>

using namespace std;

// function for adding the individual digits of a 2-digit number
int sumofdigits(int digit)
{
    return (digit%10) + (digit/10);   // e.g. 43: (43%10) + ((43/10) = 3 + 4 = 7
}

bool checkValid(long n)
{
    // sum of digts from the digit place and every other digit 
    int sumunitdigit{};

    for (int i = 0; pow(10, 2*i) < n; i++)
    {
        long t = n/pow(10, 2*i);
        sumunitdigit += t%10;
    }
    
    // sum of numbers from 2* second last digit and every other digit after that 
    int sumfromtens{};

    for (int i = 0; pow(10, 2*i+1) < n; i++)
    {
        long t = n/pow(10, 2*i+1);

        int digit = sumofdigits(2*(t%10));
        sumfromtens += digit;
    }
    
    if((sumfromtens + sumunitdigit)%10 == 0) 
        return true;
    else
        return false;
}   

int main()
{
    long creditNum;
    printf("Number: ");
    scanf("%ld", &creditNum);

    int len = log10(creditNum) + 1; // by taking log we get number of 10s we need to divide CreditNum which gives the total number of digits

    if (checkValid(creditNum))
    {
        switch (len)
        {
        case 15:
            printf("AMEX\n");
            break;
        case 13:
            printf("VISA\n");
            break;
        case 16:
            {
                int x = creditNum/pow(10, 15);
                if (x == 4)
                {
                    printf("VISA\n");
                }
                else
                    printf("MASTERCARD\n");
            }    
            break;
        default:
            printf("VALID\n");
            break;
        };
    }
    else
        printf("INVALID\n");

    return 0;
}