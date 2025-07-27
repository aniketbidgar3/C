#include <stdio.h>

void sum1()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a + b);
}

void sum2(int a, int b)
{

    printf("%d\n", a + b);
}

int main()
{
    // sum1();
    sum2(12, 23);
    return 0;
}