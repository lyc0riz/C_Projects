// WAP to print numbers from1 to n using for loop

#include <stdio.h>
#include <conio.h>

void main()
{
clrscr();
int i,n;
printf("ENter the value of N: ");
scanf("%d",&n);
for (i=0;i<=n;i++)
{
    printf("%d\n",i);

}
getch();
}