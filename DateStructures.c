#include <stdio.h>

struct date
{
    int day;
    int month;
    int year;
};

void input(struct date *d1)
{
    scanf("%d", &d1->day);
    scanf("%d", &d1->month);
    scanf("%d", &d1->year);
}

void output(struct date d1)
{
    printf("%d/", d1.day);
    printf("%d/", d1.month);
    printf("%d\n", d1.year);
}

int main()
{
    struct date d1;

    input(&d1);

    output(d1);

    struct date d2 = {30, 12, 2003};
    output(d2);

    printf("Size of Datatype date : %zu\n", sizeof(d2));

    return 0;
}