#include<stdio.h>
int main()
{
    int s=25,*y;
    y=&s;
    printf("the address of y:%d",*y);
    return 0;
}
