#include <stdio.h>
void FibusingGoto(int n)
{
    int a = 0 ,b=1,sum=0;
    labelfib:
    if(n!=0)
    {
        printf("%d ",a);
        sum = a+b;
        a = b;
        b =sum;
        n--;
        goto labelfib;
    }
};
void main()
{
    int n;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    FibusingGoto(n);
}