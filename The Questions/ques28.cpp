// WAP to find the greater from two given numbers using switch case

#include <stdio.h>
#include <conio.h>

void main(){
clrscr();

int num1,num2;

printf("Enter the first number: ");
scanf("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);

switch(num1>num2)
{
    case 1: printf("%d is the greater than %d.",num1,num2);
    break;
    case 0: switch (num2>num1)
    {
    case 1: printf("%d is the greater than %d.",num2,num1);
	break;
    default : switch (num2==num1)
    {
    case 1: printf("%d is equal to %d.",num1,num2) ;
	break;
    }
    }
}
getch();
}
