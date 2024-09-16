#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number A:");
    scanf("%d",&a);
    if (a>0)
    {
        printf("%d is positive",a);
    }
    else
    {
        printf("%d is negative",a);
    }
}
