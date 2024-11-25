// WAP to find factorial of given number using while loop

#include <stdio.h>
#include <conio.h>

void main()
{ clrscr();
int i=1,num,factorial=1;

printf("Enter a number: ");
scanf("%d",&num);

while (i<=num)
 { factorial= factorial*i;
 i++;
 }
printf("%d",factorial);
getch();
}