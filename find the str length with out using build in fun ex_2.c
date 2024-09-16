#include <stdio.h>
int main() {
    char str[1000];
    int length=0;
    printf("enter a element:");
    scanf("%s",&str);
    while(str[length] != '\0')
    {
        length++;
    }
    printf("The length of the string is: %d\n", length);
    return 0;
}
