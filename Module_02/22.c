#include<stdio.h>
int main()

{
int num1,num2,x;
	
	
	
	printf("Enter the first number:\n");
	scanf("%d",&num1);
	printf("Enter the second number:\n");
	scanf("%d",&num2);
	
	printf("which one is your operator:\n");
	printf("1)Addition(+)\n");
	printf("2)Substraction(-)\n");
	printf("3)Multiplication(*)\n");
	printf("4)Division(/)\n");
	
	scanf("%d",&x);
	
	switch(x)
	{
		case 1:
		printf("Addition:%d\n",(num1+num2));
		break;
		case 2:
		printf("Substraction:%d\n",(num1-num2));
		break;
		case 3:
		printf("Multiplication:%d\n",(num1*num2));
		break;
		case 4:
		printf("Division:%d\n",(num1/num2));
		
		break;
		default:
		printf("Error\n");
	
	}
	
	
	return 0;
	
	}