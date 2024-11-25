// Write a program to volume of sphere

#include <stdio.h>
#include <conio.h>

void main()
{
clrscr(); 
int radius;  
float volume,pi;
pi=3.14

printf("Enter the radius of sphere: ");    
scanf("%d", &radius);

volume=(4/3)(pi*radius*radius*radius);

printf("Volume of sphere of radius %d is %f.",radius,volume);

getch();

}