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

	printf("\"             Maddy's print shop - Book to change the world         \"\n");
    printf("                              Invoice                                \n");
    printf("Customer Name : %s",name);
    printf("----------------------------------------------------------------------\n");
    printf("Code         Qty            Unit Price            Line Total\n");
    printf("----------------------------------------------------------------------\n");

    for(i=0;i<n;i++){
    printf("%s           %-5d           %-d                   %-5d\n",item[i].code,item[i].quantity,item[i].unit_price,item[i].line_total);
	}
    printf("----------------------------------------------------------------------\n");
    printf("                            Sub Total             %f\n",sub_total);
    printf("/n");
    printf("                            Discount              %f\n",discount);
    printf("----------------------------------------------------------------------\n");
    printf("                            Total                  %f\n",total);
    printf("----------------------------------------------------------------------\n");
    printf("                      Thank You for Your Business                      ");


