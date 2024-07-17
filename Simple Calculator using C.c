#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main()
{
    int choice = 0;
    int a = 0, b = 0;
    printf("Pick an option:\n 1. ADD \n 2. SUBTRACT\n 3. MULTIPLY\n 4. DIVIDE\n 5. QUIT\n Your Choice: ");
    scanf("%d", &choice);
    printf("\n Enter the two Nos.: ");
    scanf("%d %d", &a, &b);
    
    switch(choice)
    {
        case 1: 
            printf("The Addition is: %d", add(a, b));
            break;
        case 2: 
            printf("The Subtraction is: %d", subtract(a, b));
            break;
        case 3: 
            printf("The Multiplication is: %d", multiply(a, b));
            break;
        case 4: 
            if (b != 0) {
                printf("The Division is: %d", divide(a, b));
            } else {
                printf("Error: Division by zero is not allowed.");
            }
            break;
        case 5: 
            exit(0);
            break;
        default:
            printf("Invalid choice.");
            break;
    }

    return 0;
}

int add(int a, int b)
{
    return (a + b);
}

int subtract(int a, int b)
{
    return (a - b);
}

int multiply(int a, int b)
{
    return (a * b);
}

int divide(int a, int b)
{
    return (a / b);
}
