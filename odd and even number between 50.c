#include <stdio.h>
int main() {
    int i = 1;
    int sum_even = 0;
    int sum_odd = 0;
    do {
        if (i % 2 == 0) {
            sum_even += i;
        } else {
            sum_odd += i;
        }
        i++;
    } while (i <= 50);
    printf("Sum of even numbers from 1 to 50: %d\n", sum_even);
    printf("Sum of odd numbers from 1 to 50: %d\n", sum_odd);
    return 0;
}

