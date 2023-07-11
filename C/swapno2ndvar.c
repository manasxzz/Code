#include<stdio.h>  
 void main()    
{    
int a, b;
printf("Enter Numbers: ");
scanf("%d%d",&a,&b);    
printf("Before swap a=%d, b=%d",a,b);      
a=a+b; b=a-b; a=a-b;    
printf("\nAfter swap a=%d b=%d",a,b);      
}   
