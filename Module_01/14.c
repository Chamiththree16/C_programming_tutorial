#include<stdio.h>
#include<math.h>
void main()
{
	int total=0;
	int i=0;
	int val[8]={2,15,8,4,6,10,23,11};
	for(i=0;i<8;i++)
	{
		total=total+val[i];
		
	}
	float sq=sqrt(total);
	printf("total=%d\n",total);
	printf("squre root is =%f",sq);
}