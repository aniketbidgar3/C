#include <stdio.h>

int main()
{

    int n = 5;

    printf("\n");
    for (int i = 0; i <n; i++)
    {
        char a = 'a';
        char A = 'A';
        for (int j = 0; j < i; j++)
        {
            printf(" %c%c  ", A, a);
            A++;
            a++;
        }
        printf("\n");
    }
    printf("\n");


    printf("\n");
    for (int i = n-1; i > 0; i--)
    {
        char a = 'a';
        char A = 'A';
        for (int j = 0; j < i; j++)
        {
            printf(" %c%c  ", A, a);
            A++;
            a++;
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}