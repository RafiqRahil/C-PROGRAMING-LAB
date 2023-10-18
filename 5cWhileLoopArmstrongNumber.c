#include <stdio.h>
#include <math.h>
void main() {
    int num, num1, rem, res = 0, n = 0;
    printf("Enter an integer:\n");
    scanf("%d", &num);
    num1 = num;
    while (num1 != 0) {
        num1 /= 10;
        ++n;
    }
    num1 = num;
    while (num1 != 0) {
        rem = num1 % 10;
        res =res+(rem*rem*rem);
        num1 /= 10;
    }
    if (res == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
}
