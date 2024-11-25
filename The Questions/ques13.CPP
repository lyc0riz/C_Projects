// WAP to find whether number is positive or negative
#include <stdio.h>
#include <conio.h>

void main()
{
clrscr();

int num;

printf("Enter the number: ");
scanf("%d", &num);
if (num==0)
printf("The number is zero");
else if (num>0)
printf("The number is positive.");
else 
printf("The number is negative.");

getch();

}