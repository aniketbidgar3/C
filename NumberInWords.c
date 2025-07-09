#include <stdio.h>

void Word(int digit)
{
    switch (digit)
    {
    case 0:
        printf("Zero ");
        break;
    case 1:
        printf("One ");
        break;
    case 2:
        printf("Two ");
        break;
    case 3:
        printf("Three ");
        break;
    case 4:
        printf("Four ");
        break;
    case 5:
        printf("Five ");
        break;
    case 6:
        printf("Six ");
        break;
    case 7:
        printf("Seven ");
        break;
    case 8:
        printf("Eight ");
        break;
    case 9:
        printf("Nine ");
        break;
    }
}


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
    printf("Enter Number : ");
    scanf("%d", &num);
    num=ReverseNumber(num);

    while(num!=0){
        int digit=num%10;
        Word(digit);
        num/=10;
    }

    return 0;
}
