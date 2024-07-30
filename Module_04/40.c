#include<stdio.h>
void main()
{
    char name[20];
	char code[5];
	int item[100];
    int n,i;
    int qty;
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

        if(code=="BN100"){
            printf("Unit price:%2f\n",12.85);
            scanf("%2f",&item[i],unit_price);
        }
        else if(code=="BN122"){
            printf("Unit price:%2f\n",18.75);
            scanf("%2f",&item[i],unit_price);
        }
          else if(code=="BN134"){
            printf("Unit price:%2f\n",20.55);
            scanf("%2f",&item[i],unit_price);
        }
         else if(code=="BN138"){
            printf("Unit price:%2f\n",11.05);
            scanf("%2f",&item[i],unit_price);
        }
         else if(code=="BN145"){
            printf("Unit price:%2f\n",20.45);
            scanf("%2f",&item[i],unit_price);
        }

         else if(code=="BN160"){
            printf("Unit price:%2f\n",20.65);
            scanf("%2f",&item[i],unit_price);
        }
         else if(code=="BN178"){
            printf("Unit price:%2f\n",14.85);
            scanf("%2f",&item[i],unit_price);
        }
           else if(code=="BN186"){
            printf("Unit price:%2f\n",22.25);
            scanf("%2f",&item[i],unit_price);
        }
         else if(code=="BN194"){
            printf("Unit price:%2f\n",24.25);
            scanf("%2f",&item[i],unit_price);
        }
         else{
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

    for(i=0;i<n;i++){
    printf("%s           %-5d           %-d                   %-5d\n",item[i]code,item[i]qty,item[i]unit_price,item[i]lineTotal
		}	
    printf("----------------------------------------------------------------------\n");
    printf("                            Sub Total             %2f\n",sub_total);
    printf("/n");
    printf("                            Discount              %2f\n",discount);
    printf("----------------------------------------------------------------------\n");
    printf("                            Total                  %2f\n",total);
    printf("----------------------------------------------------------------------\n");
    printf("                      Thank You for Your Business                      ");


}
