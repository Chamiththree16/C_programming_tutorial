#include<stdio.h>
int main()
{
int a,n,x=0,y=1,next_number;
printf("Enter Numbers of you want in Fibonacci numbers:");
scanf("%d",&n);
printf("Fibonacci numbers: ");
for(a=1;a<=n;++a)
{
	printf("%d, ",x);
	next_number=x+y;
	x=y;
	y=next_number;
}
return 0;

}