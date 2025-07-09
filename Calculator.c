#include <stdio.h>

// Function declarations
float add(float a, float b)
{
    return a + b;
}

float subtract(float a, float b)
{
    return a - b;
}

float multiply(float a, float b)
{
    return a * b;
}

float divide(float a, float b)
{
    if (b != 0)
        return a / b;
    else
    {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
}

int main()
{
    int choice;
    float num1, num2, result;

    while (1)
    {
        // Menu
        printf("\n===== Calculator Menu =====\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("-1. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == -1)
        {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }

        // Input numbers
        if (choice <= 4)
        {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }

        switch (choice)
        {

        case 1:
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            result = divide(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
