#include<stdio.h>
void main()
{
	char name[20];
	float sub_total;
	float discount;
	float total;
	
	printf("Enter customers name:\n");
	scanf("%s",name);
	
	struct book_details{
		char code[10];
		int quantity;
		float unit_price;
		float line_total;
	};
	
	
	struct book_details item[100];
	int n,i;

	printf("Enter number of items:\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Item code:\n");
		scanf("%s",item[i].code);
		fflush(stdin);
		printf("Item Quantity:\n");
		scanf("%d",&item[i].quantity);
		fflush(stdin);
		printf("Unit Price:\n");
		scanf("%f",&item[i].unit_price);
		
		item[i].line_total=item[i].unit_price*item[i].quantity;
	}
	
	for(int i=0;i<n;i++){
		sub_total+=item[i].line_total;
	}
	
	if(sub_total>5000){
		discount=sub_total*0.1;
	}
	else if(sub_total>=1000 && sub_total<=5000){
		discount=sub_total*0.05;
	}
	total=sub_total-discount;
	
	printf("            \"Maddy's print shop - Book to change the world\"\n");
    printf("                              Invoice                                \n");
    printf("Customer Name : %s\n",name);
    printf("----------------------------------------------------------------------\n");
    printf("%-20s %-20s %-20s %-20s\n","Code","Qty","Unit Price","Line Total");
    printf("----------------------------------------------------------------------\n");

    for(i=0;i<n;i++){
    printf("%-20s %-20d %-20.2f %-20.2f\n",item[i].code,item[i].quantity,item[i].unit_price,item[i].line_total);
	}	
    printf("----------------------------------------------------------------------\n");
    printf("%40s  %-20s %-20.2f\n","","Sub Total",sub_total);
    printf("                                                                       \n");
    printf("%40s  %-20s %-20.2f\n","","Discount",discount);
    printf("----------------------------------------------------------------------\n");
    printf("%40s  %-20s %-20.2f\n","","Total",total);
    printf("----------------------------------------------------------------------\n");
    printf("                      Thank You for Your Business                      ")
	
}