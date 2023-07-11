//3. WAP to find the average of 3 numbers.
#include <stdio.h>
#include <conio.h>
void main()
{
  int x, y, z;
  printf("Enter 3 numbers:\n");
  scanf("%d%d%d", &x, &y, &z);
  printf("\nAverage of the Given Numbers=%d", (x + y + z) / 3);
  getch();
}
