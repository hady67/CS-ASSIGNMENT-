2. Write a C program to check whether a character is uppercase or lowercase alphabet.

#include <stdio.h>
#include <ctype.h>
int main() {
char a;
printf("Enter the  character you want to check \n");
scanf("%c",&a);
if(isupper(a)!=0)
{
printf("The character is UPPERCASE");
}
else {  printf("The character is LOWERCASE"); }
return 0;
}
