#include <stdio.h>

int main() {
    int a, b, choice;

    printf("===== SIMPLE CALCULATOR =====\n");
    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("\nChoose operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Result = %d\n", a + b);
            break;
        case 2:
            printf("Result = %d\n", a - b);
            break;
        case 3:
            printf("Result = %d\n", a * b);
            break;
        case 4:
            if(b != 0)
                printf("Result = %.2f\n", (float)a / b);
            else
                printf("Cannot divide by zero!\n");
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
