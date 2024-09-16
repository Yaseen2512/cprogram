#include <stdio.h>

// Function to compute the sum
int sum(int a, int b) {
    return a + b;
}

// Function to compute the subtraction
int sub(int a, int b) {
    return a - b;
}

// Function to compute the multiplication
int mul(int a, int b) {
    return a * b;
}

// Function to compute the division
int div(int a, int b) {
    return a / b;
}

int main() {
    int numTimes;
    printf("Enter the number of times to perform calculations: ");
    scanf("%d", &numTimes);

    for (int i = 0; i < numTimes; i++) {
        int choice, a, b;
        printf("\nChoose an operation:\n");
        printf("1. Sum\n2. Subtraction\n3. Multiplication\n4. Division\n");
        scanf("%d", &choice);

        printf("Enter a value of A: ");
        scanf("%d", &a);
        printf("Enter a value of B: ");
        scanf("%d", &b);

        switch (choice) {
            case 1:
                printf("Sum: %d\n", sum(a, b));
                break;
            case 2:
                printf("Subtraction: %d\n", sub(a, b));
                break;
            case 3:
                printf("Multiplication: %d\n", mul(a, b));
                break;
            case 4:
                printf("Division: %d\n", div(a, b));
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

