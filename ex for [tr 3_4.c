#include <stdio.h>
int main()
{
    int a,b;
    printf("enter a value of A:");
    scanf("%d",&a);
    printf("enter a value of B:");
    scanf("%d",&b);
    int *x = &a,*y = &b;
    if (*x>*y)
    {
        printf("X is greater than Y\n");
    }
    else
    {
        printf("Y is greater than X\n");
    }



    return 0;
}
