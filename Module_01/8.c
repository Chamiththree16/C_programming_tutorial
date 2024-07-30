#include<stdio.h>
int main()
{
	int x=1;
	int rows;
	printf("Enter number of rows\n");
	scanf("%d",&rows);
	while(x<=rows)
	{
		int y=0;
		while(y<x)
		{
			printf("*");
			y++;
			
		}
		printf("\n");
		x++;
	}
	
	return 0;
}