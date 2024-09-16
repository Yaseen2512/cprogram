#include<stdio.h>
int sum(a,b);
int main()
{
    sum(12,25);
}
int sum(int a, int b)
{
    printf("\nthe value od A :%d",a);
    printf("\nthe value of B :%d",b);
    printf("\nthe value of a+b :%d",a+b);
    return a+b;
}
