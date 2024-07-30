#include<stdio.h>
#include<string.h>

int main()
{
char x[50];
char y[50];

printf("Enter a string to cheak whether it is a palindrome or not:");
scanf("%s",&x);
strcpy(y,x);
strrev(y);

if(strcmp(x,y)==0)
{
	printf("The string is a palindrome\n");
}
else
{
	printf("The string is not a palindrome\n");
}
return 0;
}