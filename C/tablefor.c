// print table of a number using for loop
#include <stdio.h>
void main()
{
    int n;
    printf("Enter Number:");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("\n%d*%d=%d", n, i, n * i);
    }
}