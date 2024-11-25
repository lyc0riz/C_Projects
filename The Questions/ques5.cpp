// Write a program to find division of two user defined numbers.

#include <stdio.h>
#include <conio.h>

void main()
{
clrscr(); //clears previous output

int num1,num2;  // assign values
float num3
printf("Enter the first number: ");    // ask user for first number
scanf("%d", &num1);    // stores the fisrt value at address using &

printf("Enter the second number: ");   // ask user for second value
scanf("%d", &num2);   // stores the second value at address using &

num3=num1/num2;

printf("Product of %d and %d is %d.",num1,num2,num3);  //output

getch();    //waits to exit

}