#include<stdio.h>
void main()
{
    printf("\t\t\t\t\t\tRathinam Group");
    int n,d,b,t,a,h,t_g;
    printf("\n\t\tName:");
    scanf("%s",&n);
    printf("\n\t\tDepartment:");
    scanf("%s",&d);
    printf("\n\t\tBus Fees:");
    scanf("%d",&b);
    printf("\n\t\tTution Fees:");
    scanf("%d",&t);
    printf("\n\t\tHostel Fees:");
    scanf("%d",&h);
    a=t+b+h;
    printf("\n\t\tTotal Fees:");
    printf("%d",a);
    t_g=a+(a%4);
    printf("\n\t\t-------------------------");
    printf("\n\t\tTotal Fees WIth GST:");
    printf("%d",t_g);
    printf("\n\t\t-------------------------");
}
