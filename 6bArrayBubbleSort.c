#include<stdio.h>
void main()
{
    int arr[100];
    int n,i,j,temp;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("Enter the %d elements:-\n",n);
    for (i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-i-1;j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Sorted Array in ascending order:-");
    for (i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
}