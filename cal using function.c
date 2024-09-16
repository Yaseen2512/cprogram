#include<stdio.h>
int sum();
int sub();
int mul();
int div();
int main()
{
    sum();
    sub();
    mul();
    div();}
int sum(int a,int b)
{
    printf("\nEnter a value of A:");
    scanf("%d",&a);
    printf("\nEnter a value of B:");
    scanf("%d",&b);
    printf("%d",a+b);
    return 0;
}
int sub(int a,int b)
{
    printf("\nEnter a value of A:");
    scanf("%d",&a);
    printf("\nEnter a value of B:");
    scanf("%d",&b);
    printf("%d",a-b);
    return 0;
}
int mul(int a,int b)
{
    printf("\nEnter a value of A:");
    scanf("%d",&a);
    printf("\nEnter a value of B:");
    scanf("%d",&b);
    printf("%d",a*b);
    return 0;
}
int div(int a,int b)
{
    printf("\nEnter a value of A:");
    scanf("%d",&a);
    printf("\nEnter a value of B:");
    scanf("%d",&b);
    printf("%d",a/b);
    return 0;
}
