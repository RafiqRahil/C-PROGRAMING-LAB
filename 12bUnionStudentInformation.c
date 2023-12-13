#include<stdio.h>
void main()
{
    union student
    {
        int rollno;
        char name[50];
        float avg;
    };
    int n,i;
    union student s;
    printf("Enter the Student Roll Number\n");
    scanf("%d",&s.rollno);
    printf("Student Roll Number: %d\n",s.rollno);
    printf("Enter the student name\n");
    scanf("%s",s.name);
    printf("Student Name:%s\n",s.name);
    printf("Enter the student average\n");
    scanf("%f",&s.avg);
    printf("Average:%.2f\n",s.avg);
}