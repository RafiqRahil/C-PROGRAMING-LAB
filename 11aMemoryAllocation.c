#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr, n1, n2, i;
    printf("Enter size of the array: ");
    scanf("%d", &n1);
    ptr = (int*) malloc(n1 * sizeof(int));
    printf("Addresses of previously allocated memory: ");
    for (i = 0; i < n1; ++i) {
        printf("%p ", ptr + i);
    }
    printf("\nEnter the new size of the array: ");
    scanf("%d", &n2);
    ptr = realloc(ptr, n2 * sizeof(int));
    for (i = n1; i < n2; ++i) {
        printf("%p ", ptr + i);
    }
    free(ptr);
    return 0;
}
