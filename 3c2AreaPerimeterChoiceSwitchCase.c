#include<stdio.h>
void main()
{
    int length, breadth, side, area, perimeter;
    float radius;
    char x, c, r, s;
    printf("Enter c for circle\tEnter r for rectangle\tEnter s for square\n");
    scanf("%c",&x);
    switch(x)
    {
      case 'c':
      printf("Enter the radius of Circle\n");
      scanf("%f",&radius);
      area=3.14159*radius*radius;
      perimeter=2*3.14159*radius;
      printf("The Area: %d\tThe Perimeter: %d\n",area,perimeter);
      break;
      case 'r':
      printf("Enter the Length and Breadth of Rectangle respectively\n");
      scanf("%d%d",&length,&breadth);
      area=length*breadth;
      perimeter=2*(length+breadth);
      printf("The Area: %d\tThe Perimeter: %d",area,perimeter);
      break;
      case 's':
      printf("Enter the Side of Square\n");
      scanf("%d",&side);
      area=side*side;
      perimeter=4*side;
      printf("The Area: %d\tThe Perimeter: %d",area,perimeter);
      break;
    }
}