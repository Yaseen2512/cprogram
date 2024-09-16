#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2,k;
    printf(" enter a num1 num2 and k values :");
    scanf("%d %d %d",&num1,&num2,&k);
    int power=pow(num1,num2);
    int digit=0;
    while (k>0 && power>0)
    {
        k--;
        digit=power%10;
        power/=10;
    }
    printf("the kth digit from the right in %d^%d is %d\n", num1,num2,digit);
    return 0;
}
