#include<stdio.h>
void main()
{
	int a,b=0;
	for(a=65;a<=90;a++)
	{
		b=a+32;
		printf("%c%c,",a,b);
	}
}