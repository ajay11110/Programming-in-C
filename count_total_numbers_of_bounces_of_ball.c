#include <stdio.h>
#include <math.h>

int main()
{
    float h, v, e, g;
    int a = 1;

    printf("enter height from which ball will drop:");
    scanf("%f", &h);

    printf("enter last height:");
    scanf("%f", &e);

    printf("enter acceleretion:");
    scanf("%f", &g);

    v = pow(2 * g * h, 0.5);

    for (int i = 1; h > e; i++)
    {

        v = (2 * v) / pow(5, 0.5);
        h = (v * v) / (2 * g);
        a++;
    }

    printf("total bounces were %d", a);
    return 0;
}