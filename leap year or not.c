#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year :");
    scanf("%d",&year);
    if ((year%4==0)&&(year%100!=0)||(year%400==0))
    {
        printf("%d The given year is leap year",year);
    }
    else
    {
        printf("%d The given year is not a leap year",year);
    }
    return 0;
}
