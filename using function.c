#include<stdio.h>
void sum(),sub();
int main()
{   sum();
    sum();
    sub();
}
void sum()
{
    int a,b;
    printf("\nEnter a value of A:");
    scanf("%d",&a);
    printf("\nEnter a value of B:");
    scanf("%d",&b);
    printf("\n%d is the sum of a+b",a+b);
    return 0;
}
void sub()
{
    int a,b;
    printf("\nEnter a value of A:");
    scanf("%d",&a);
    printf("\nEnter a value of B:");
    scanf("%d",&b);
    printf("\n%d is the sum of a-b",a-b);
    return 0;
}
