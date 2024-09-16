#include <stdio.h>
void main()
{
    int i=1,n,fact=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial:%d",fact);
}
