#include<stdio.h>
int main()
{
    int m_1,m_2,m_3,m_4,m_5,tot_of_mark,avg;
    printf("Enter a five subject mark :");
    printf("\nEnter a Tamil mark :");
    scanf("%d",&m_1);
    printf("\nEnter a English mark :");
    scanf("%d",&m_2);
    printf("\nEnter a Maths mark :");
    scanf("%d",&m_3);
    printf("\nEnter a Science mark :");
    scanf("%d",&m_4);
    printf("\nEnter a Social Science :");
    scanf("%d",&m_5);
    tot_of_mark=m_1+m_2+m_3+m_4+m_5;
    printf("\nTotal of five mark =%d",tot_of_mark);
    avg=tot_of_mark/5;
    printf("\nAverage of five mark =%d",avg);
    if(avg>=80 && avg<=100)
    {
        printf("The greade is 'A'");
    }
    else if(avg>=60 && avg<=80)
    {
        printf("\nThe greade is 'B'");
    }
    else if(avg>=40 && avg<=60)
    {
        printf("\nThe greade is 'C'");
    }
    else
    {
        printf("\nThe greade is 'FAIL'");
    }
    printf("\nI Hope That We All The Student Will Get The Good Greade At Next Time");
    return 0;
}
