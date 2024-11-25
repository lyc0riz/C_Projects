// Write a program to find area of circle

#include <stdio.h>
#include <conio.h>

void main()
{
clrscr(); 
int radius;  
float area,pi;
pi=3.14

printf("Enter the radius of circle: ");    
scanf("%d", &radius);

area=(pi*radius*radius);

printf("Area of circle of radius %d is %f.",radius,area);

getch();

}