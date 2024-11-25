// Write a program to find average of five numbers.

#include <stdio.h>
#include <conio.h>

void main()
{
clrscr(); 
int num1,num2,num3,num4,num5;  
float sum,average;

printf("Enter the first number: ");    
scanf("%d", &num1);    

printf("Enter the second number: ");   
scanf("%d", &num2);

printf("Enter the third number: ");   
scanf("%d", &num3);

printf("Enter the fourth number: ");   
scanf("%d", &num4);

printf("Enter the fifth number: ");   
scanf("%d", &num5);

sum=(num1+num2+num3+num4+num5);
average=(sum/5);

printf("Product of %d,%d,%d,%d and %d is %f.",num1,num2,num3,num4,num5,average);

getch();

}