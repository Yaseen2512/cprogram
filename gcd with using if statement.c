#include<stdio.h>
int findGCD(int,int);
int main()
{
   int a,b,gcd;
   printf("enter a value of 'a':");
   scanf("%d",&a);
   printf("enter a value of 'b':");
   scanf("%d",&b);
   gcd=findGCD(a,b);
   printf("GCD is %d",gcd);
   return 0;
}
int findGCD(int a,int b)
{
    if(a==0)
        return b;
    else
        return findGCD(b%a,a);
}
