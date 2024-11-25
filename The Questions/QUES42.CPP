// WAP to generate the table of given number using for loop

#include <stdio.h>
#include <conio.h>

void main()
{ clrscr();
int n=10,i=1,multiple,Factor;
printf("Enter a number: ");
scanf("%d", &Factor);

 for (i=1;i<=n;i++)
    {
    multiple=Factor*i;
    printf("%d x %d = %d\n",Factor,i,multiple);
    }
getch();

}