#include<stdio.h>
void main()
{
    int num,sum=0,r;
    printf("Enter The Number:\n");
    scanf("%d",&num);
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    printf("Sum of Digits of Number is: %d",sum);
}