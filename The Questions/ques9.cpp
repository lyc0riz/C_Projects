// Write a program to find SI

#include <stdio.h>
#include <conio.h>

void main()
{
clrscr(); 
int principal,rate,time;  
float SI;

printf("Enter the principle: ");    
scanf("%d", &principal);

printf("Enter the rate in %: ");    
scanf("%d", &rate);

printf("Enter the time in year: ");    
scanf("%d", &time);

SI=((principal*time*rate)/100);

printf("Simple intrest is %f.",SI);

getch();

}