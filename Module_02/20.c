#include<stdio.h>
void main()
{
	int x,y,j;
	char current_location,next_location;
	
	printf("Give your Location:\n");
	printf("A\n");
	printf("B\n");
	printf("C\n");
	
	scanf("%c\n",&current_location);
	
	switch(current_location);
	{
		case 'A':
		printf("You are in station A\n");
		break;
		case 'B':
		printf("You are in station B\n");
		break;
		case 'C':
		printf("You are in station C\n");
		break;
		default:
		printf("You are entered an invalied\n");
	}
	
	printf("Fron which station to you want to go\n");
	Printf("A\n");
	Printf("B\n");
	Printf("C\n");
	scanf("%c\n",&next_location);
	
	switch(next_location);
	{
		case 'A':
		printf("Your next location is A\n");
		break;
		case 'B':
		printf("Your next location is B\n");
		break;
		case 'C':
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
		printf("Your distance is:%d",x+y);
	}
	else if(current_location==B||C&&next_location==B||C)
	{
		printf("Your distance is:%d",y);
	}
	else
	{
		printf("Invalied");
	}
	
	j=x,x+y,y;
	
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