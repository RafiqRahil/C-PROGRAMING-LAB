#include <stdio.h>
 
void main()
{
   int a;
   printf("Enter The Number:\n");
   scanf("%d", &a);
   if (a%2 == 0)
      printf("The given number is Even\n");
   else
      printf("The given number is Odd\n");
}