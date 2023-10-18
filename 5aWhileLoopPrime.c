#include <stdio.h>
void main() {
    int n, i=1,c=0;
    printf("Enter the number:\n");
    scanf("%d", &n);
    while (i <= n) {
        if (n%i == 0)
         {
            c++;
         }
         i++;
    }
    if (c == 2) {
        printf("The Given Number is a Prime");
    } else {
        printf("The Given Number is a Composite");
    }
}
