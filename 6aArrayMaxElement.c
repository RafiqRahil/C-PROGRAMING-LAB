#include <stdio.h>
void main()
{
    int arr[30];
    int n,i;
    printf("Enter the size of array:-\n");
    scanf("%d",&n);
    printf("Enter the %d Elements\n",n);
    for (i=0;i<n;i++)
    {
        scanf("\n%d",&arr[i]);
    }
    int max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    printf("%d is the maximum element of array",max);
}