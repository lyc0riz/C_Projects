// WAP to find greater number from given two different numbers.

#include <stdio.h>
#include <conio.h>

void main()
{
clrscr();

int num1,num2;

printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);

if (num1>num2)
printf("%d is greater than %d",num1,num2);
else 
printf("%d is greater than %d",num2,num1);

getch();

}
