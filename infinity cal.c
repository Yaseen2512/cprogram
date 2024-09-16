#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int div(int a, int b) {
    return a / b;
}

int main() {
    while (1) {
        int choice, a, b;
        printf("\nChoose an operation:\n");
        printf("1. Sum\n2. Subtraction\n3. Multiplication\n4. Division\n");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4) {
            printf("Invalid choice! Exiting the program.\n");
            break;
        }

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
        }
    }

    return 0;
}

