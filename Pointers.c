#include <stdio.h>

int main() {
    printf("Hello, World!\n");

    int a=10;
    int *b=&a;
    printf("%d\n",a);
    printf("%p\n",b);
    printf("%p\n",&a);
    printf("%d\n",*b);

    return 0;
}
