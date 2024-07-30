#include<stdio.h>
void main()
{
    char name[20];
	int item[100];
    int n,i;
    int code,qty;
    float unit_price,line_total,sub_total,discount,total;

    printf("Enter customers name:\n");
    scanf("%s",name);

    printf("Enter number of items:\n ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Item code : \n");
        scanf("%s",code);
        printf("Quantity:\n");
        scanf("%d",&qty);
		
		printf("Enter your code\n");
		printf("1)BN100\n");
		printf("2)BN122\n");
		printf("3)BN134\n");
		printf("4)BN138\n");
		printf("5)BN145\n");
		printf("6)BN160\n");
		printf("7)BN165\n");
		printf("8)BN178\n");
		printf("9)BN186\n");
		printf("10)BN194\n");
		
		scanf("%d",&code);

	switch(code)
	{
	case 1:
	
		printf("Unit price:%2f\n",12.85);
		scanf("%2f",&item[i],unit_price);
		break;
	 case 2:
	    printf("Unit price:%2f\n",18.75);
        scanf("%2f",&item[i],unit_price);
		break;
	case 3:
		printf("Unit price:%2f\n",20.55);
		scanf("%2f",&item[i],unit_price);
		break;
	case 4:
		
        printf("Unit price:%2f\n",11.50);
        scanf("%2f",&item[i],unit_price);
		break;
	case 5:	
		printf("Unit price:%2f\n",25.45);
        scanf("%2f",&item[i],unit_price);
		break;
	case 6:
		printf("Unit price:%2f\n",20.45);
        scanf("%2f",&item[i],unit_price);
		break;
		
	case 7:
		printf("Unit price:%2f\n",25.65);
        scanf("%2f",&item[i],unit_price);
		break;
	case 8:
	    printf("Unit price:%2f\n",14.85);
        scanf("%2f",&item[i],unit_price);
		break;
	case 9:
		printf("Unit price:%2f\n",22.25);
        scanf("%2f",&item[i],unit_price);
        break;
	case 10:
		printf("Unit price:%2f\n",24.25);
        scanf("%2f",&item[i],unit_price);
		break;
	default:
		printf("Invalid code\n");
			
	}
		
        line_total=qty*unit_price;
        printf("Line Total:%2f\n",item[i],line_total);

    }
	for(i=0;i<n;i++)
	{
		sub_total=(line_total)+item[i];
	}


    if(sub_total>5000){
    printf("Discount:%2f\n",sub_total*0.1);
    scanf("%2f",&discount);
    }
    else if(1000<sub_total<5000){
        printf("Discount:%2f\n",(sub_total*0.05));
        scanf("%2f",&discount);
    }
    else{
        printf("Discount:%2f\n",sub_total*0);
        scanf("%2f",&discount);
    }
    total=sub_total-discount;

    printf("\"             Maddy's print shop - Book to change the world         \"\n");
    printf("                              Invoice                                \n");
    printf("Customer Name : %s",name);
    printf("----------------------------------------------------------------------\n");
    printf("Code         Qty            Unit Price            Line Total\n");
    printf("----------------------------------------------------------------------\n");

    for(i=0;i<n;i++)
    printf("%s           %-5d           %-d                   %-5d\n",item[i],code,item[i],qty,item[i],unit_price,item[i],line_total);
    printf("----------------------------------------------------------------------\n");
    printf("                            Sub Total             %2f\n",sub_total);
    printf("/n");
    printf("                            Discount              %2f\n",discount);
    printf("----------------------------------------------------------------------\n");
    printf("                            Total                  %2f\n",total);
    printf("----------------------------------------------------------------------\n");
    printf("                      Thank You for Your Business                      ");


}
