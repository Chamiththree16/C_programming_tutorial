#include<stdio.h>
int main()
{
	int x;
	char Male,Female,Unmarried,Married;
	
	printf("Enter your Age\n");
	scanf("%d",&x);
	
	int Sex;
	
	printf("Enter your Sex\n");
	printf("1)Male\n");
	printf("2)Female\n");
	scanf("%d",&Sex);
	
	switch(Sex)
	{
		case 1:
		printf("Male\n");
		break;
		case 2:
		printf("Female\n");
		break;
		default:
		printf("Invalied\n");
	
	}
	int Marital_status;
	printf("Enter your marital status\n");
	printf("1)Married\n");
	printf("2)Unmarried\n");
	scanf("%d",&Marital_status);
	
	switch(Marital_status)
	{
		case 1:
		printf("Married\n");
		break;
		case 2:
		printf("Unmarried\n");
		break;
		default:
		printf("Invalied\n");
	}
	
	if(Married)
	{
		printf("Insured\n");
	}
	else if(Unmarried&&Male&&x>30)
	{
		printf("Insured\n");
	}
	else if(Unmarried&&Female&&x>25)
	{
		printf("Insured\n");
	}
	else
	{
		printf("Not Insured\n");
	}
	
	
	return 0;
}