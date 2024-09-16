#include<stdio.h>
int main()
{
    int a,i,n;
    a=15;
    printf("Enter a end value:");
    scanf("%d",&n);
    for (i=1;i<=a;i++){
        n = a*i;
        printf("%d x %d = %d\n",a,i,n);
    }
    return 0;


}
