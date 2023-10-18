#include <stdio.h>
void main ()
{
    int i, n, lar,sma, elem;
    printf ("Enter total number of elements or n\n");
    scanf ("%d", &elem);
    printf ("Enter first number: ");
    scanf ("%d", &n);
    lar=n;
    sma=n;
    for (i=1; i<= elem -1 ; i++)
    {
        printf ("Enter another number: ");
        scanf ("%d",&n);
        if (n>lar)
        lar=n;
        if (n<sma)
        sma=n;
    }
    printf ("The largest number is %d", lar);
    printf ("\nThe smallest number is %d", sma);
}