#include<stdio.h>
int main()
{
    int num,rev_num=0;
    printf("Enter a four digit number:");
    scanf("%d",&num);
    while (num!=0)
    {
        int digit=num%10;
        rev_num=rev_num*10+digit;
        num/=10;
    }
    printf("The reverse of the number is %d\n",rev_num);
    return 0;
 }
