// WAP to display first n odd numbers using while statement

#include <stdio.h>
#include <conio.h>

void main()
{
clrscr();
int i=1,n;

printf("Choose till which number you neeed to view odd numbers: ");
scanf("%d",&n);

while (i<=n)
    {printf("%d\n",i);
    i=i+2;
    }
getch();
}