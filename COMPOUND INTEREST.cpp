#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d, e, f, g, h;

    printf("ENTER PRINCIPAL AMMOUNT :");
    scanf("%f", &a);

    printf("ENTER RATE :");
    scanf("%f", &b);

    printf("ENTER TIME (IN YEARS) :");
    scanf("%f", &c);

    printf("ENTER NUMBER OF TIME FOR WHICH INTEREST COMPOUNDED IN A YEAR :");
    scanf("%f", &d);

    e = 1 + ((b / d) / 100);
    f = pow(e, d * c);
    g = a * f;
    h = g - a;

    printf("COMPOUNT INTEREST OF %f YEARS IS %f", c, h);

    return 0;
}
