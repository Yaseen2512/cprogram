#include<stdio.h>
int main()
{
    int i,a[10],n;
    scanf("%d",&n);
    printf("Enter a numbers:");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        if(a[i]==25)
    {
        printf("\nThe element is found");
        break;
    }
    }
    else
    {
        printf("\nThe element is not found");
    }

    return 0;
}
