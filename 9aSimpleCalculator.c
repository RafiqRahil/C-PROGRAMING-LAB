#include<stdio.h>
double add(double a, double b )
{
    return a+b;
}
double sub(double a, double b )
{
    return a-b;
}
double mul(double a, double b )
{
    return a*b;
}
double div(double a, double b )
{
    if (b!=0)
    {
        return a/b;
    }
    else
    {
        printf("Error cannot divide by zero\n");
        return 0;
    }
}
int mod(int a,int b)
{
    return a%b;
}
int main()
{
    char operator;
    double num1,num2,result;
    printf("Enter the desired operator (+,-,*,/):\n");
    scanf("%c",&operator);
    printf("Enter the first number\n");
    scanf("%lf",&num1);
    printf("Enter the second number\n");
    scanf("%lf",&num2);
    switch(operator)
    {
        case '+':
        result=add(num1,num2);
        break;
        case '-':
        result=sub(num1,num2);
        break;
        case '*':
        result=mul(num1,num2);
        break;
        case '/':
        result=div(num1,num2);
        break;
        default:
        printf("Enter a valid operator\n");
        return 1;
    }
    printf("Result=\n%lf",result);
    return 0;
}