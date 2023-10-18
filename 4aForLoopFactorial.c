#include <stdio.h>
void main()
{
  int num, i, fact = 1;
  printf("Enter The Number:\n");
  scanf("%d", &num);
  for (i = 1; i <= num; i++)
  {
    fact = fact * i;
  }
  printf("%d! = %d\n", num, fact);
}