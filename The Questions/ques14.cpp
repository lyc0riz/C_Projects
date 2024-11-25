// WAP to find whether number is odd or even
#include <stdio.h>
#include <conio.h>

void main()
{
clrscr();

int num;

printf("Enter the number: ");
scanf("%d", &num);

if (num%2==0)
printf("The number is even");
else 
printf("The number is odd.");

getch();

}