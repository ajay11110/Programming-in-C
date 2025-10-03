#include <stdio.h>

int main()
{
    float a, b, c;

    printf("ENTER FIRST NUMBER :");
    scanf("%f", &a);

    printf("ENTER SECOND NUMBER :");
    scanf("%f", &b);

    printf("ENTER THIRD NUMBER :");
    scanf("%f", &c);

    if (a > b && a > c)
    {
        printf("GREATEST NUMBER IS %f", a);
    }

    else
    {
        if (b > a && b > c)
        {
            printf("GREATEST NUMBER IS %f", b);
        }

        else
        {
            printf("GREASTEST NUMBER IS %f", c);
        }
    }

    return 0;
}
