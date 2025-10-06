#include <stdio.h>

int main()
{
    int a, b, c = 1, d = 2;

    printf("enter that how many prime number should add:");
    scanf("%d", &a);

    for (int j = 3; 1; j++)
    {
        for (int i = 2; i < j; i++)
        {
            if (j % i == 0)
            {
                b = 0;
                break;
            }
            else
            {
                b = 1;
            }
        }
        if (b)
        {
            c++;
            d += j;
        }

        if (c == a)
        {
            break;
        }
    }

    printf("sum of first %d prime numbers is %d", a, d);

    return 0;
}