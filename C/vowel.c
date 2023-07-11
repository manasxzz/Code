// to find if a given character is vowel or not
#include <stdio.h>
void main()
{
    char ch;
    printf("Enter the character to be checked: ");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("The Given Character is a Vowel");
    else
        printf("The Given Character is a Constant");
}