#include<stdio.h>
int main()
{
    int rating;
    printf("enter a rating number:");
    scanf("%d",&rating);
    if (rating<2)
    {
        printf("Not recommended");
    }
    else if (rating>=2 && rating<=4)
    {
        printf("Recommended");
    }
    else
    {
        printf("Highly recommonded");
    }
}
