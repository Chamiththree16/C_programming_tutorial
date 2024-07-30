#include<stdio.h>
#include<math.h>
int main()

{
	int num1,x;
	float y;
	printf("Enter your number\n");
	scanf("%d",&num1);
	
	y=sqrt((double)num1);
	x=y;
	
	if(x==y)
	{
		printf("sqrt Number");
	}
	else
	{
		printf("Not a sqrt Number");
	}
	
	
	
	
	return 0;
}