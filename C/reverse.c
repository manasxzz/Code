// to find the reverse of a number
#include <stdio.h>
void main()
{
    int n, rev, c;
    printf("Enter Number to be Reversed: ");
    scanf("%d", &n);
    while (n != 0)
    {
        c = n % 10;
        rev = rev * 10 + c;
        n = n / 10;
    }
    printf("\nThe reverse of the given number: %d", rev);
}