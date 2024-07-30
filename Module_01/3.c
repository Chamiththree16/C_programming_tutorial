#include<stdio.h>
int main()
{
	char fruit;
	printf("which one is your favorite fruit:\n");
	
	printf("a)Apples\n");
	printf("b)Bananas\n");
	printf("c)Cherries\n");
	
	scanf("%c",&fruit);
	
	switch(fruit)
	{
		case'a':
		printf("You like Apples\n");
		break;
		case'b':
		printf("you like Bananas\n");
		break;
		case'c':
		printf("you like cherries\n");
		break;
		default:
		printf("you entered an invalid choise\n");
		
	}
	return 0;
}