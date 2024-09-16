#include <stdio.h>
int main() {
    int start, end;

    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    for (int i = start; i <= end; i+=2) {
        printf("%d\n", i);
    }

    return 0;
}
