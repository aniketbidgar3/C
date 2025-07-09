#include <stdio.h>

int main()
{
    // An array storing different ages
    int n = 5;
    int ages[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ages[i]);
    }

    float avg, sum = 0;
    int i;

    // Get the length of the array

    // Loop through the elements of the array and accumulate the sum
    for (i = 0; i < n; i++)
    {
        sum += ages[i];
    }

    // Calculate the average by dividing the sum by the length
    avg = sum / n;

    // Print the average
    printf("The average age is: %.2f", avg);

    return 0;
}