//to print the sum of digits
#include <stdio.h>
void main()
{
    int n; int sum=0,c;
    printf("Enter Number: ");
    scanf("%d",&n);
    do
    {
        c=n%10;
        sum=sum+c;
        n=n/10;
    }while(n!=0);
    printf("The Sum of Numbers:%d",sum);

}
