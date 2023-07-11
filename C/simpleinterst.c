#include <stdio.h>
#include <conio.h>
void main()
{
    int principal,rate,time;
    printf("Enter Principal:");
    scanf("%d",&principal);
    printf("\nEnter Rate: ");    
    scanf("%d",&rate);
    printf("\nEnter Time in Years: ");
    scanf("%d",&time);
    printf("\n\nThe Simple Interest=%d",(principal*rate*time)/100);
  getch();
}