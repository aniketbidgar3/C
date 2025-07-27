#include <stdio.h>

typedef union current_date
{
    int day;
    int month;
    int year;
} date;

int main()
{
    date d1;
    scanf("%d", &d1.day);
    printf("%d/", d1.day);

    scanf("%d", &d1.month);
    printf("%d/", d1.month);

    scanf("%d", &d1.year);
    printf("%d\n", d1.year);

    printf("Size of Datatype date : %zu\n", sizeof(d1));

    return 0;
}