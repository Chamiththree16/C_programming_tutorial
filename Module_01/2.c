#include<stdio.h>
int main()
{
	int j;
	printf("Enter your value\n");
	scanf("%d",&j);
	if(j>=0&&j<100)
	{
		printf("Range 0-100");
		
	}
	else if (j>=100&&j<200)
	{
		printf("Range 100-200");
	}
		else if (j>=200&&j<300)
		{
			printf("Range 200-300");
			
		}
		else
		{
			printf("Invalied Range");
		
	}
	return 0;
}
