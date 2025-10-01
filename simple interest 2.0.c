#include <stdio.h>

int main()
{
    float a, b, c, d;

    printf("ENTER PRINCIPAL AMMOUNT :");
    scanf("%f", &a);

    printf("ENTER RATE :");
    scanf("%f", &b);

    printf("ENTER TIME (IN YEARS) :");
    scanf("%f", &c);

    if (a < 0 || (b < 0 || c < 0))
    {
        for (int i = 0; a < 0 || b < 0 || c < 0; i++)
        {
            if (a < 0)
            {
                printf("PRINCIPAL AMOUNT CAN NOT BE NEGATIVE SO ENTER POSITIVE VALUE\n");

                printf("ENTER PRINCIPAL AMMOUNT :");
                scanf("%f", &a);
            }

            if (b < 0)
            {
                printf("RATE CAN NOT BE NEGATIVE SO ENTER POSITIVE VALUE\n");

                printf("ENTER RATE :");
                scanf("%f", &b);
            }

            if (c < 0)
            {
                printf("TIME CAN NOT BE NEGATIVE SO ENTER POSITIVE VALUE\n");

                printf("ENTER TIME (IN YEARS) :");
                scanf("%f", &c);
            }
        }
    }

    if (a >= 0 && (b >= 0 && c >= 0))
    {
        d = a * b * c / 100;
        printf("SIMPLE INTEREST FOR %f YEARS IS %f \n", c, d);

        printf("AJAY YADAV,125113041");
    }

    return 0;
}
