#include <stdio.h>

int ReverseNumber(int num)
{
    int rev = 0;
    while (num != 0)
    {
        int digit = num % 10;
        rev = (rev * 10) + digit;
        num /= 10;
    }
    return rev;
}

int main()
{
    int num;
    scanf("%d", &num);

    if (num == ReverseNumber(num))
    {
        printf("Given Number is Palindrome");
    }
    else
    {
        printf("Given Number is Not Palindrome");
    }

    return 0;
}
