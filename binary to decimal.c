#include <stdio.h>
void decimal_binary(int dn){
    int binary[32],i=0;
    while(dn>0){
        binary[i]=dn%2;
        dn=dn/2;
        i++;
    }
    printf("The Binary value is:");
    for(int j=i-1;j>=0;j--)
    {
            printf("%d",binary[j]);

    }
}
int main()
{
    int dn;
    printf("Enter the decimal value:");
    scanf("%d",&dn);
    decimal_binary(dn);
    return 0;
}

