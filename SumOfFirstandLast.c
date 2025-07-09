#include <stdio.h>

int main()
{

    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    int sum = (num % 10);
    int digit = 0;
    while (num != 0)
    {
        digit = num % 10;
        num /= 10;
    }

    sum += digit;

    printf("%d", sum);
    return 0;
}
