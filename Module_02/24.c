#include<stdio.h>
int main()
{
	int x;
	float charge_of_units,surcharge,Total_charge;
	printf("Enter the total number of units consumer\n");
	scanf("%d",&x);
	
	if(x>=0&&x<50)
	{
		charge_of_units=printf("charge of units(RS):%2f\n",x*0.5);
	}
	else if(x<=150)
	{
		charge_of_units=printf("charge of units(RS):%2f\n",((50*0.5)+((x-50)*0.75)));
	}
	else if(x<=250)
	{
		charge_of_units=printf("charge of units(RS):%2f\n",((50*0.5)+(100*0.75)+((x-150)*1.2)));
	}
	else
	{
		charge_of_units=printf("charge of units(RS):%2f\n",((50*0.5)+(100*0.75)+(100*1.2)+((x-250)*1.5)));
	}
	surcharge=charge_of_units*(20/100);
	Total_charge=charge_of_units+surcharge;
	
	printf("Total amount due(RS):%2f",Total_charge);
	
	
	return 0;
}