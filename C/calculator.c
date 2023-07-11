#include <stdio.h>
#include <conio.h>
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

void main()
{
    int num1, num2;
    printf("Enter the Numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("The sum=%d", sum(num1, num2));
}
