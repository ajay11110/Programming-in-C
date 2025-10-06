#include <stdio.h>
#include <string.h>

int main()
{
    int date, month, year;
    char name[20];

    printf("Enter date: ");
    scanf("%d", &date);

    printf("Enter month: ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    switch (month)
    {
    case 1:
        strcpy(name, "January");
        break;

    case 2:
        strcpy(name, "February");
        break;

    case 3:
        strcpy(name, "March");
        break;

    case 4:
        strcpy(name, "April");
        break;

    case 5:
        strcpy(name, "May");
        break;

    case 6:
        strcpy(name, "June");
        break;

    case 7:
        strcpy(name, "July");
        break;

    case 8:
        strcpy(name, "August");
        break;

    case 9:
        strcpy(name, "September");
        break;

    case 10:
        strcpy(name, "October");
        break;

    case 11:
        strcpy(name, "November");
        break;

    case 12:
        strcpy(name, "December");
        break;

    default:
        printf("Invalid month");
        return 0; // Exit early if invalid
    }

    printf("Date is: %d %s %d\n", date, name, year);

    return 0;
}
