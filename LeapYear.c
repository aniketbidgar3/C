#include <stdio.h>

int LeapYear(int Year)
{

    if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{

    int Year;
    printf("Enter Number : ");
    scanf("%d", &Year);
    if (LeapYear(Year) == 1)
    {
        printf("This is Leap Year");
    }
    else
    {
        printf("This is Not Leap Year");
    }

    return 0;
}
