// print fibonacci series
#include <stdio.h>
void main()
{
    int a = 1, b = 1, c, n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    if (n == 0);
    else if (n == 1)
        printf("%d", a);
    else if (n == 2)
        printf("%d%d", a, b);
    else
    {
        printf("%d,%d,", a, b);
        for (int i = 3; i <= n; i++)
        {
            c = a + b;
            a = b;
            b = c;
            printf("%d,", c);
        }
    }
}