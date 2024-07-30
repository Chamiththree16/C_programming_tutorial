#include<stdio.h>
int main()
{
int j;
for(j=1;j<10;j++)
{
	if(j%2==0)
	{
		continue;
	}
	printf("j=%d\n",j);
}

return 0;

}