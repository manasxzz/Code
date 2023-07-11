// To print the table of a number using while loop
#include <stdio.h>
void main()
{
    int n, i = 1;
    printf("Enter Number: ");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("\n%d*%d=%d", n, i, n * i);
        i++;
    }
}