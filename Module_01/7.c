#include<stdio.h>
int main()
{
	int j,num;
	j=1;
	printf("Enter 3 numbers\n");
	
	while(j<=3)
	{
		printf("Enter the %d number=",j);
		scanf("%d",&num);
		printf("Number is =%d\n",num);
		j++;
	}
	return 0;
} 