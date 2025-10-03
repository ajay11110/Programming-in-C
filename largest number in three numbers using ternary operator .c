#include <stdio.h>

int main()
{
    float a, b, c, largest;

    printf("ENTER FIRST NUMBER :");
    scanf("%f", &a);

    printf("ENTER SECOND NUMBER :");
    scanf("%f", &b);

    printf("ENTER THIRD NUMBER :");
    scanf("%f", &c);

    largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("%f is the largest number.\n", largest);

    return 0;
}
