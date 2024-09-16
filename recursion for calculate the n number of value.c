#include<stdio.h>
int sum(int n)
{
    unsigned long long int sum_1=0;
    if (n==1)
    {
        return 1;
    }
    else
    {
        return sum_1=n+sum(n-1);
    }
}
int main()
{
    unsigned long long int n;
    printf("Enter a range of value :");
    scanf("%d",&n);
    int total=sum(n);
    printf("The sum the given range = %d",total);
}
