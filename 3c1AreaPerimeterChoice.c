#include <stdio.h>

void main()
{
    int len, bre, oper, side;
    float rad;
    
    printf("USE 1 FOR AREA OF CIRCLE\tUSE 2 FOR AREA OF RECTANGLE\tUSE 3 FOR AREA OF SQUARE\nUSE 4 FOR PERIMETER OF CIRCLE\tUSE 5 FOR PERIMETER OF RECTANGLE\tUSE 6 FOR PERIMETER OF SQUARE\n");
    scanf("%d",&oper);
    {
    if(oper==1){
    printf("Enter the radius of the Circle\n");
    scanf("%f",&rad);
    printf("AREA: %f",3.14159*rad*rad);
    }
    else if(oper==2){
    printf("Enter the length of the rectangle\n");
    scanf("%d",&len);
    printf("Enter the breadth of the rectangle\n");
    scanf("%d",&bre);
    printf("AREA: %d",len*bre);
    }
    
    else if(oper==3) {
    printf("Enter the value of side\n");
    scanf("%d",&side);
    printf("AREA: %d",side*side);
    }

    else if(oper==4) {
        printf("Enter the radius of the Circle\n");
        scanf("%f",&rad);
        printf("PERIMTETER: %d",2*3.14159*rad);
    }
    
    else if (oper==5){
        printf("Enter the length of the rectangle\n");
        scanf("%d",&len);
        printf("Enter the breadth of the rectangle\n");
        scanf("%d",&bre);
        printf("PERIMETER: %d",2*(len+bre));
    }

    else if (oper==6) {
        printf("Enter the side of Square\n");
        scanf("%d",&side);
        printf("PERIMETER: %d",4*(side));
    }
    else 
    printf("Please Enter a valid Number");
    }
}
