#include <stdio.h>

unsigned long long int fact(int n) {
    return (n == 0) ? 1 : n * fact(n - 1);
}

int main() {
    int numTimes;
    printf("Enter the number of times to calculate factorial: ");
    scanf("%d", &numTimes);

    for (int i = 0; i < numTimes; i++) {
        int num;
        printf("Enter a value: ");
        scanf("%d", &num);

        printf("Factorial of %d: %llu\n", num, fact(num));
    }

    return 0;
}
