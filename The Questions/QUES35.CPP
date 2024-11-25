// WAP to display the summation of first n positive numbers using while statement

#include <stdio.h>
#include <conio.h>

void main()
{ clrscr();
int n, i=1, sum=0;
printf("Enter a positive integer: ");
scanf("%d", &n);

    while (i <= n)
 {
	sum += i;
	i++;
 }

printf("Sum = %d", sum);
getch();

}
