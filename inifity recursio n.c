
#include <stdio.h>

unsigned long long int fact(int n) {
    return (n == 0) ? 1 : n * fact(n - 1);
}

int main() {
    while (1) {
        int num;
        printf("Enter a value: ");
        scanf("%d", &num);

        printf("Factorial of %d: %llu\n", num, fact(num));
    }

    return 0;
}
