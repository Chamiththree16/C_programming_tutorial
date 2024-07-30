#include<stdio.h>
int main()
{
	int j,i,k;
	for(i=0,j=5,k=20;i<10;i++,j++,k--)
	{
		printf("value of i=%d",i);
		printf("\t value of j=%d",j);
		printf("\t value of k=%d\n",k);
	}	
	return 0;
}