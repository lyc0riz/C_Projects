// WAP to find whether given alphabet is vowel or constonent

#include <stdio.h>
#include <conio.h>

void main() 
{
clrscr();
char ch;
printf("Enter the alphabet; ");
scanf("%ch",%ch);
    switch (ch) 
    {
        case 'a': printf("The character %c is a vowel.\n", ch);
        break;
        case 'A': printf("The character %c is a vowel.\n", ch);
        break;
        case 'e': printf("The character %c is a vowel.\n", ch);
        break;
        case 'E': printf("The character %c is a vowel.\n", ch);
        break;
        case 'i': printf("The character %c is a vowel.\n", ch);
        break;
        case 'I': printf("The character %c is a vowel.\n", ch);
        break;
        case 'o': printf("The character %c is a vowel.\n", ch);
        break;
        case 'O': printf("The character %c is a vowel.\n", ch);
        break;
        case 'u': printf("The character %c is a vowel.\n", ch);
        break;
        case 'U': printf("The character %c is a vowel.\n", ch);
        break;

    default:
        printf("The character %c is a consonant.\n", ch);
    }
getch();
}
