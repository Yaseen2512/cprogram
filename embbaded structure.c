#include<stdio.h>
struct student
{
    int a;
    float b;
    struct college
    {
        int c;
        char name[20];
    };
};
void main()
{
    struct student s={1,1.5};
    struct college d={2,"yaseen"};
    printf("\n%d %f",s.a,s.b);
    printf("\n%d %s",d.c,d.name);
    printf("\n");
}
