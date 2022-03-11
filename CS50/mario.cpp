#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    int height;
    do
    {// get height from user
    printf("Height: ");
    cin >> height;
    }while ( height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        for (int j = height - 1; j > i; j--)
        {
            printf(" ");
        }

        for (int  k = 0; k < i + 1; k++)
        {
            printf("#");
        }

        // loop for constant gap
        printf("  ");

        for (int l = 0; l < i + 1; l++)
        {
            printf("#");
        }

        // move to the next line
        printf("\n");
    }
    

    return 0;
}