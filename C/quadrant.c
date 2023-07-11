#include <stdio.h>
#include <conio.h>
void main()
{
    int abscissa, ordinate;
    printf("Enter the Abscissa: ");
    scanf("%d", &abscissa);
    printf("\nEnter the Ordinate: ");
    scanf("%d", &ordinate);
    if (abscissa > 0 && ordinate > 0)
    {
        printf("\nThe Given point lies in the Ist Quadrant.");
    }
    else if (abscissa < 0 && ordinate > 0)
    {
        printf("\nThe Given Point lies in the IInd Quadrant.");
    }
    else if (abscissa < 0 && ordinate < 0)
    {
        printf("\nThe Given point lies in the IIIrd Quadrant.");
    }
    else
    {
        printf("\nThe Given point lies in the IVth Quadrant.");
    }
    getch();
}