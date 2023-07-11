//to swap the value of two variables using a third variable
#include <stdio.h>
#include <conio.h>
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void main()
{
    int a,b;
    printf("Enter Numbers: ");
    scanf("%d%d",&a,&b);
    printf("\nThe Value of A before Swapping:%d \nThe Value of B before swapping:%d",a,b);
    swap(&a,&b);
    printf("\nThe Value of A: %d \nThe Value of B: %d",a,b);
    getch();
}