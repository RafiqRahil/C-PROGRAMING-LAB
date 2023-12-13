#include<stdio.h>
void main()
{
    struct  student
    {
        int rollno;
        int m1,m2,m3;
        int total;
        float avg;
    };
    int n,i;
    int fun (int x,int y,int z);
    printf("Enter the number of students\n");
    scanf("%d",&n);
    struct student s[n];
    for (i=0;i<n;i++)
    {
        printf("Enter the student roll number and marks\n");
        scanf("%d",&s[i].rollno);
        scanf("%d",&s[i].m1);
        scanf("%d",&s[i].m2);
        scanf("%d",&s[i].m3);
        s[i].total=fun(s[i].m1,s[i].m2,s[i].m3);
        s[i].avg=s[i].total/3.0;
    }
    printf("*****Student Details*****\n");
    for (i=0;i<n;i++)
    {
        printf("Rollno:%d\n",s[i].rollno);
        printf("Mark1:%d\n",s[i].m1);
        printf("Mark2:%d\n",s[i].m2);
        printf("Mark3:%d\n",s[i].m3);
        printf("Total:%d\n",s[i].total);
        printf("average:%.2f\n",s[i].avg);
    }
}
int fun(int x,int y,int z) 
{
int tot=(x+y+z);
return tot;}