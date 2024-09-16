#include <stdio.h>
void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int a, b;
    printf("Enter a value for A: ");
    scanf("%d", &a);
    printf("Enter a value for B: ");
    scanf("%d", &b);
    swap(&a, &b);
    printf("Swapped values: A = %d, B = %d\n", a, b);
    return 0;
}

