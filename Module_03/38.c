#include<stdio.h>
int main()
{
int a,b,num;
for(a=1;a<10000;a++)
{
printf("Enter an integer:");
scanf("%d",&b);

if(b==0)
	{
		printf("Programm Terminated.Thank You!");
		break;
	}
printf("Factors of %d:",b);
for(num=1;num<=b;++num)
{
	if(b%num==0)
	{
		printf(" %d,",num);
	}
}
	printf("\n");
}
return 0;
}