#include <stdio.h>

int SumOfDigits(int num)
{
    int digit, sum = 0;
    while (num != 0)
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    return sum;
}
    
int main()
{

    int num;
    printf("Enter Number : ");
    scanf("%d", &num);
    int sum = SumOfDigits(num);
    while (sum >= 10)
    {
        printf("%d\n", sum);
        num = sum;
        sum = SumOfDigits(num);
    }
    printf("%d", sum);
    return 0;
}
