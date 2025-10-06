#include <stdio.h>

int main()
{
    char a[20], c;
    int b, count = 2;

    printf("enter word:");
    scanf(" %s", &a);

    printf("enter position number:");
    scanf("%d", &b);

    printf("enter character:");
    scanf(" %c", &c);

    for (int j = 0;a[j] != '\0'; j++)
    {
        count++;
    }

    for (int i = count; i >= b; i--)
    {
        a[i] = a[i - 1];
    }

    a[b - 1] = c;

    printf("your new word is %s", a);

    return 0;
}