#include<stdio.h>
int main()
{
    int num,reversed=0,original,remainder;
    printf("Enter a integer :");
    scanf("%d",&num);
    original=num;
    while(num!=0)
    {
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }
    if (original==reversed)
    {
        printf("%d is a palindrome",original);
    }
    else
    {
        printf("%d is not a palindrome",original);
    }
    return 0;
}
