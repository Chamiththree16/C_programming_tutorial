#include<stdio.h>
int main()
{
int referance_year,year,leep_year,difference,total_days,day;
referance_year=2001;
leep_year=0;
total_days=0;
day=0;

printf("Enter the year:\n");
scanf("%d",&year);

difference=year-(referance_year);

while(referance_year<year)
{
	
	
		if(referance_year%100==0)
		{
			if(referance_year%400==0)
			{
				leep_year++;
			}
		}
		else
		{
			if(referance_year%4==0)
			{
				leep_year++;
			}
		}
		referance_year++;
	
}

total_days=(difference-leep_year)*365+leep_year*366;
day=total_days%7;

printf("The day on 1st January:\n",year);

switch(day)
{
	case 0:
	printf("Monday\n");
	break;
	case 1:
	printf("Tuesday\n");
	break;
	case 2:
	printf("Wendesday\n");
	break;
	case 3:
	printf("Thursday\n");
	break;
	case 4:
	printf("Friday\n");
	break;
	case 5:
	printf("Saturday\n");
	break;
	case 6:
	printf("Sunday\n");
	break;
	
}



return 0;
}