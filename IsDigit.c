#include <stdio.h>

int main()
{
    char c;
    printf("Enter Character : ");
    scanf("%c", &c);

    if (c >= '0' && c <= '9')
    {
        printf("It is Digit\n");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("It is Small Alphabet\n");
    }
    else if (c >= 'A' && c <= 'Z')
    {
        printf("It is Capital Alphabet\n");
    }
    else
    {
        printf("It is Character\n");
    }

    return 0;
}
