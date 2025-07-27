#include <stdio.h>

typedef struct CurrentTime
{
    int hour;
    int minute;
    int second;

} time;

void Tinput(time *t1)
{
    scanf("%d", &t1->hour);
    scanf("%d", &t1->minute);
    scanf("%d", &t1->second);
}

void Toutput(time t1)
{
    printf("%d:", t1.hour);
    printf("%d:", t1.minute);
    printf("%d\n", t1.second);
}

int main()
{

    time t1;

    Tinput(&t1);

    Toutput(t1);

    time t2 = {12, 12, 12};
    Toutput(t2);

    printf("Size of Datatype time : %zu\n",sizeof(t2));

    return 0;
}