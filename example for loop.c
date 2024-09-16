#include <stdio.h>
int main() {
    int start, end;
    printf("Enter the starting number: ");
    scanf("%d", &start);
    printf("Enter the ending number: ");
    scanf("%d", &end);
    int i = start;
    while (i <= end) {
        printf("%d\n", i);
        ++i;
    }
    return 0;
}
