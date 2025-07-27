#include <stdio.h>
#include <string.h>

typedef struct MyFullName
{
    char fname[10];
    char mname[10];
    char lname[10];
} name;

void output(name n1)
{
    printf("%s ", n1.fname);
    printf("%s ", n1.mname);
    printf("%s\n", n1.lname);
}

int main()
{
    name n1 = {"Aniket", "Ashok", "Bidgar"};

    output(n1);

    name n2;

    strcpy(n2.fname, "Akshada");
    strcpy(n2.mname, "Sujit");
    strcpy(n2.lname, "Chautmahal");

    output(n2);

    printf("Size of Datatype name : %zu\n",sizeof(n2));

    return 0;
}