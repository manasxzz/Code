#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main()
{
    int phy, chem, bio, eng, cs, percentage;
    printf("\t\t\tRESULT CALCULATOR\n\nEnter Marks Obtained in Physics: ");
    scanf("%d", &phy);
    printf("\nEnter Marks Obtained in Chemistry: ");
    scanf("%d", &chem);
    printf("\nEnter Marks Obtained in Biology: ");
    scanf("%d", &bio);
    printf("\nEnter Marks Obtained in English: ");
    scanf("%d", &eng);
    printf("\nEnter Marks Obtained in Computer Science: ");
    scanf("%d", &cs);
    percentage = (phy + chem + bio + eng + cs) / 5;
    system("cls");
    printf("****************RESULTS****************\n\nPercentage Obtained: %d", percentage);
    if (percentage > 40)
        printf("\nPASS CERTIFICATE AWARDED");
    else
        printf("\nPASS CERTIFICATE NOT AWARDED");
    getch();
}