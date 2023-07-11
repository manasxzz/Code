//2. WAP to add, subtract, divide and multiply 2 numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
  int a, b;
  printf("Enter First Number: ");
  scanf("%d", &a);
  printf("\nEnter Second Number: ");
  scanf("%d", &b);
  printf("\n>The sum of the given numbers=%d\n>The difference of the given numbers=%d\n>The product of the given numbers=%d\n>%d divided by%d=%d ", a + b, a - b, a * b, a, b, a / b);
  getch();
}
