#include<stdio.h>
void main()
{
    printf("***************************************Rathinam Stores************************************");
    int a,a1,a2,a4,g;
    printf("\n Product_1:");
    scanf("%s",&a);
    printf("\n quantity_1:");
    scanf("%d",&a1);
    printf("\nprice_1:");
    scanf("%d",&a2);
    a4=a1*a2;
    printf("\nprice_1:");
    printf("%d",a4);
    g=a4+(a4%4);
    printf("\n price_tot_1:");
    printf("%d",g);
}
