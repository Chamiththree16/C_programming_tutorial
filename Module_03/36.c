#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a positive integer:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
		printf("Iteration %d:%d+%d=%d\n",i,(i*(i-1))/2,i,(i*(i+1))/2);
	}
	return 0;
	
}