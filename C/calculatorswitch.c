#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

long long int add(long long int a, long long int b)
{
    return a + b;
}
long long int sub(long long int a, long long int b)
{
    return a - b;
}
long long int mul(long long int a, long long int b)
{
    return a * b;
}
long long int divide(long long int a, long long int b)
{
    return a / b;
}
void main()
{
    long long int x, y, choice, i = 1;
    while (1)
    {
        system("cls");
        printf("**************Calculator*************");
        printf("\n\t\tMENU");
        printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\nENTER CHOICE...");
        scanf("%lld", &choice);
        system("cls");
        printf("\n\n*********INPUT************\nEnter First Number: ");
        scanf("%lld", &x);
        printf("\nEnter Second Number: ");
        scanf("%lld", &y);
        system("cls");
        switch (choice)
        {
        case 1:
            printf("********ADDITION********\n\n%lld+%lld=%lld", x, y, add(x, y));
            getch();
            break;

        case 2:
            printf("********SUBTRACTION********\n\n%lld-%lld=%lld", x, y, sub(x, y));
            getch();
            break;

        case 3:
            printf("********MULTIPLICATION********\n\n%lldx%lld=%lld", x, y, mul(x, y));
            getch();
            break;

        case 4:
            printf("********DIVISION********\n\n%lld/%lld=%lld", x, y, divide(x, y));
            getch();
            break;

        default:
            printf("********WRONG INPUT********");
            getch();
            break;
        }
    }
}
