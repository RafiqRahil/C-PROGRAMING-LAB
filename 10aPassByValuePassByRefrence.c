#include<stdio.h>
int swapbyvalue(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    printf("After Swap by Value inside function itself the First number: %d\tSecond number: %d\n",a,b);
}
int swapbyreference(int*a,int*b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int num1,num2;
    printf("Enter value of first number and second number:\n");
    scanf("%d\n%d",&num1,&num2);
    printf("Before Swap First number: %d and Second Number: %d\n",num1,num2);
    swapbyvalue(num1,num2);
    printf("After Swap by value in main function\nFirst number: %d\tSecond Number: %d\n",num1,num2);
    swapbyreference(&num1,&num2);
    printf("After Swap by refrence in main function\nFirst number: %d\tSecond Number: %d\n",num1,num2);
    return 0;
}