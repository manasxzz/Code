// to find the factorial using function
#include <stdio.h>
long double factorial(long double n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void main()
{
    long double n;
    printf("Enter Number: ");
    scanf("%Lf", &n);
    printf("The factorial of the given Number:%Lf", factorial(n));
}