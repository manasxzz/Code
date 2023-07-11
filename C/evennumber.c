#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Enter Number:");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("The given number is an even number");
    else
        printf("The given number is an odd number");
    getch();
}