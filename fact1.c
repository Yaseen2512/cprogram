#include <stdio.h>
 unsigned long long int fact(int n)
{
    if (n==0)
    {
        return 1;
    } else
    {
        return n*fact(n-1);
    }
}
int main()
{
    int num_times;
    printf("Enter the number of times: ");
    scanf("%d",&num_times);
    for (int i=0;i<num_times;i++)
    {
        int num;
        printf("Enter a value:");
        scanf("%d",&num);
    unsigned long long int result=fact(num);
        printf("Factorial of %d: %llu\n",num,result);
    }
    return 0;
}
