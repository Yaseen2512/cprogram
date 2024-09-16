#include<stdio.h>
int main()
{
    int arr[5],n;
    printf("enter a number of element :");
    scanf("%d",&n);
    printf("enter a array of element :");
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int min,temp;
    for (int i=0;i<n-1;i++)
    {
        int min=1;
        for (int j=i+1;j<n;j++)
        {
            if (arr[min]>arr[j])
            {
                min=j;
            }
        }
        if (arr[min]!=i)
            temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        {
        printf("%d ", arr[i]);
    }
}
