#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter num1:");
    scanf("%d",&num1);
    printf("Enter num2:");
    scanf("%d",&num2);
    printf("Enter num3:");
    scanf("%d",&num3);

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            printf("The 1st Number is the greatest among three");
        }
        else
        {
            printf("The 3rd Number is the greatest among three");
        }
    }
    else
    {
        if(num2 > num3)
        {
            printf("The 2nd Number is the greatest among three");
        }
        else
        {
            printf("The 3rd Number is the greatest among three");
        }
    }

    return 0;
}
