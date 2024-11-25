// WAP to find greater number from given three diffrent numbers.

#include <stdio.h>
#include <conio.h>

void main()
{
clrscr();

int num1,num2,num3;

printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);
printf("Enter the third number: ");
scanf("%d", &num3);

if (num1>num2)
{if (num1>num3)
printf("%d is greater than %d and %d.",num1,num2,num3);
else
printf("%d is greater than %d and %d.",num3,num1,num2);
}
else if (num2>num3)
printf("%d is greater than %d and %d.",num2,num3,num1);
else
printf("%d is greater than %d and %d.",num3,num2,num1);
getch();

}