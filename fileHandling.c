#include <stdio.h>

int main()
{
    FILE *fptr;

    // Writing Something In File

    // read
    // write
    // append

    // fptr = fopen("Kiran.txt", "a");

    // fprintf(fptr, "Hello My Name is Kiran\n");
    // fprintf(fptr, "I live in Pune\n");
    // fprintf(fptr, "I am Computer Science Engineering Graduate\n");
    // fprintf(fptr, "Currently Work at Disha Computers\n");

    // fclose(fptr);

    // Best Practice to Open File While Reading

    fptr = fopen("kiran.txt", "r");

   
        char sentense[50];
        

        while (fgets(sentense, 50, fptr))
        {
            printf("%s", sentense);
        }
    

    fclose(fptr);

    return 0;
}
