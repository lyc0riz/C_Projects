// WAP to find factorial of given number using do while loop

#include <stdio.h>
#include <conio.h>

void main()
{ clrscr();
int i=1,num,factorial=1;

printf("Enter a number: ");
scanf("%d",&num);

do
 { factorial= factorial*i;
 i++; } while (i<=num);
printf("%d",factorial);
getch();
}

