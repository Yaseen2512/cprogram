#include<stdio.h>
int main()
{
    int a;
    printf("enter a bday date given:");
    scanf("%d",&a);

    if (a==12)
    {
        printf("the bday is yours");
    }
    else if (a==25)
    {
        printf("the bday is your mine");
    }
    else
    {
        printf("the bday is not for u both");
    }
    return 0;
}
