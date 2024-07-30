#include<stdio.h>
int main()
{
int count,number=0;
for (count=1;number<=1000&&count<=5;count++)
{
	printf("%d\n",count);
	printf("Enter a number :\n");
	scanf("%d",& number);
}	
return 0;	
	
}