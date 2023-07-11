// to check if the given number is an armstrong number
#include <stdio.h>
void main()
{
    int n, sum = 0, c;
    printf("Enter Number to be Checked: ");
    scanf("%d", &n);
    int num = n;
    while (n != 0)
    {
        c = n % 10;
        sum = sum + (c * c * c);
        n = n / 10;
    }
    if (num == sum)
        printf("The given number is an Armstrong Number.");
    else
        printf("The given number is not an Armstrong Number.");
}