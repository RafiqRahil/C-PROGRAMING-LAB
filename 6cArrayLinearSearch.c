#include <stdio.h>
void main() {
    int a[20], i, elesearch, n;
    printf("Enter size of the array\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    printf("Enter element to search:-\n");
    scanf("%d", &elesearch);
    for (i = 0; i < n; ++i) {
        if (a[i] == elesearch)
            break;
    }
    if (i < n)
        printf("Number %d found at index %d\n",elesearch, i);
    else
        printf("No Element not found");
}