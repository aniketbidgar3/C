#include <stdio.h>

int main()
{
    FILE *fptr;

    // Writing Something In File

    // fptr = fopen("Information.txt", "a");

    // fprintf(fptr, "Hello My Name is Aniket\n");
    // fprintf(fptr, "I live in Nashik\n");
    // fprintf(fptr, "I am Computer Science Engineering Graduate\n");
    // fprintf(fptr, "Currently Work at Disha Computers\n");

    // fclose(fptr);

    // Best Practice to Open File While Reading

    fptr = fopen("Information.txt", "r");

    if (fptr == NULL)
    {
        printf("File Does Not Exists");
    }
    else
    {
        char sentense[50];

        while (fgets(sentense, 50, fptr))
        {
            printf("%s", sentense);
        }
    }

    fclose(fptr);

    return 0;
}
