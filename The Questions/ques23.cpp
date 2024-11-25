// WAP to perform addition,subtraction,multiplication,division of 2 numbers as per user choice using if statement

#include <stdio.h>
#include <conio.h>

void main() 
{
clrscr();

int choice;
float num1,num2,result;

printf("You can perform the basic math funntion using this\nEnter the first number: ");
scanf("%f",&num1);
printf("Enter the second number: ");
scanf("%f",&num2);

printf("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\nYour choice: ");
scanf("%d",&choice);

if (choice==1)
{result=num1+num2;
printf("The sum of %f and %f is %f.",num1,num2,result);}
else if (choice==2)
{result=num1-num2;
printf("The difference of %f and %f is %f.",num1,num2,result);}
else if (choice==3)
{result=num1*num2;
printf("The product of %f and %f is %f.",num1,num2,result);}
else if (choice==4)
{result=num1/num2;
printf("The quotient of %f and %f is %f.",num1,num2,result);}
else
printf("Invalid choice");

getch();
}