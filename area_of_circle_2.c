#include <stdio.h>

int main()

{
    float a, b;

    printf("ENTER RADIUS OF CIRCLE :");
    scanf("%f", &a);

    if (a < 0)
    {
        for (int i = 0; a < 0; i++)
        {
            printf("RADIUS CAN NOT BE NEGATIVE\n");
            printf("ENTER RADIUS OF CIRCLE :");
            scanf("%f", &a);
        }
    }

   if (a >= 0)
        {
            b = 3.14 * a * a;
            printf("AREA OF CIRCLE IS :%f \n", b);

            printf("AJAY YADAV,125113041 \n");
        }

    return 0;
}