// to check if a number is a palindrome number
#include <stdio.h>
void main()
{
    int n, rev, c;
    printf("Enter Number to be Checked: ");
    scanf("%d", &n);
    int num = n;
    while (num != 0)
    {
        c = num % 10;
        rev = rev * 10 + c;
        num = num / 10;
    }
    if (n == rev)
        printf("\nThe Given Number is a Palindrome Number");
    else
        printf("\nThe given number is not a Palindrome Number");
}