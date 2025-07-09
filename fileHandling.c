#include <stdio.h>

int main()
{
    FILE *fptr;

    // Create a file on your computer (filename.txt)
    fptr = fopen("file.doc", "r");
    //   fprintf(fptr,"My name is Aniket");
    fprintf(fptr, "\nMy name is Aniket");

    // Close the file
    fclose(fptr);

    return 0;
}
