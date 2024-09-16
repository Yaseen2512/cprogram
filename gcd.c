#include <stdio.h>
int main()
 {
    int val_1,val_2,gcd;
    printf("\t\t\t--------------------------\n");
    printf("\t\t\t\t GCD\n");
    printf("\t\t\t--------------------------\n");
    printf("\n\t\t\tENTER ANY TWO INTEGER \n");
    printf("\n\t\tenter a value of val_1 : ");
    scanf("%d",&val_1);
    printf("\n\t\tenter a value of val_2 : ");
    scanf("%d",&val_2);
    while (val_2!=0)
    {
        int temp=val_2;
        val_2=val_1%val_2;
        val_1=temp;
    }
    gcd=val_1;
    printf("\n\t\tGCD=%d",gcd);
    printf("\n");
    return 0;
}
