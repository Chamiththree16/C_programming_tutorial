#include<stdio.h>
void main()
{
	int x=75,y=975,z=x+y,j,current_location,next_location,A,B,C;
	
	
	
	printf("Give your Location:\n");
	printf("1)A\n");
	printf("2)B\n");
	printf("3)C\n");
	scanf("%d",&current_location);
	
	switch(current_location)
	{
		case 1:
		printf("You are in station A\n");
		break;
		case 2:
		printf("You are in station B\n");
		break;
		case 3:
		printf("You are in station C\n");
		break;
		default:
		printf("You are entered an invalied");
	}
	
	printf("From which station to you want to go\n");
	printf("1)A\n");
	printf("2)B\n");
	printf("3)C\n");
	scanf("%d",&next_location);
	
	switch(next_location)
	{
		case 1:
		printf("Your next location is A\n");
		break;
		case 2:
		printf("Your next location is B\n");
		break;
		case 3:
		printf("Your next location is C\n");
		break;
		default:
		printf("You are entered an invalied\n");
	}	
		
		
	if(current_location==A||B&&next_location==A||B)
	{
		printf("Your distance is:%d",x);
	}
	else if(current_location==A||C&&next_location==A||C)
	{
		printf("Your distance is:%d",z);
	}
	else if(current_location==B||C&&next_location==B||C)
	{
		printf("Your distance is:%d",y);
	}
	else
	{
		printf("Invalied");
	}
	
	j=x,y,z;
	
	if(j>=0&&j<100)
	{
		printf("Distance is Low");
	}
	else if(j>=100&&j<1000)
	{
		printf("Distance is Moderate");
	}
	else
	{
		printf("Distance is Hight");
	}
	
	
	
	
}