#include<stdio.h>
#include<conio.h>
void main()
{
int character,vowels,consonants;
vowels={a,e,i,o,u};
clrscr();
scanf("%c",&character);
if(character==vowels)
printf("Vowel");
else if(character!=vowels)
printf("Consonant");
else
printf("invalid");
getch();
}
