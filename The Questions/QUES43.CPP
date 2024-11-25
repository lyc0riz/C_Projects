// WAP to find factorial of given number using for loop

#include <stdio.h>
#include <conio.h>

void main()
{ clrscr();
int i,num,factorial=1;

printf("Enter a number: ");
scanf("%d",&num);

for (i=1;i<=num;i++)
 { factorial= factorial*i;
 }
printf("%d",factorial);
getch();
}