#include<stdio.h>
#include<string.h>

typedef struct{
int bill_number;
char name[50];
char catogory[20];
int type;
int range1;
int range2;
int range3;


}bill;

void menu(bill b[],int n)
{
    int choise;
    printf("***********Ceylon Electricity Board (CEB)**********\n");
    printf("*********Welcome to the Bill Calculator App*************\n");
    printf("\n");
    printf("\n");
    printf("Enter your choise\n");
    printf("1)View Concumer details\n");
    printf("2)Electricity bill\n");

    scanf("%d",&choise);

    switch(choise)
    {
    case 1:
        display(b,n);
        main(b,3);
        break;
    case 2:

        callbill(b,n);
        main(b,3);
        break;
    default:
        printf("You enter an Invalied!");
    }

}
void display(bill b[], int n)
{
    int i;
    printf("|BIll_number\t |Name\t |Catogory\t |Type\t |Range1\t |Range2\t |Range3|\n");
    for(i=0;i<n;i++){
        printf("%d\t\t %s\t %s\t %d\t %d\t %d\t\t %d\t\n",b[i].bill_number,b[i].name,b[i].catogory,b[i].range1,b[i].range2,b[i].range3);

    }

}

void callbill(bill b[],int n)
{
    float call_bill[n];
    int i;
    printf("Bill Number \t\t Total Bill\n");

    for(i=0;i<n;i++){
        if(strcmp("Industrial",b[i].catogory)==0)
        {
            if(b[i].type==1){
                call_bill[i] = 600 +  b[i].range1*10.8+b[i].range2*11.5+b[i].range3*12.2;
            }else if(b[i].type==2){
                    call_bill[i]=3000+b[i].range1*11+b[i].range2*20.5+b[i].range3*6.85;
            }
            else{
                printf("You enterd an invalied!");
            }
        }else if(strcmp("General",b[i].catogory)==0)
            if(b[i].type==1){
                call_bill[i]=240 + b[i].range1*18.3+b[i].range2*20.25+b[i].range3*22.85;

            }else if(b[i].type==2){

                call_bill[i]=3000+b[i].range1*21.8+b[i].range2*26.6+b[i].range3*15.4;
            }
        else{
            printf("You enterd an invalied");
            }
        printf("%d \t\t\t %.2f\n",b[i].bill_number,call_bill[i]);
                }

}

void main(){
    bill b[3];

    b[0].bill_number =6434;
    strcpy(b[0].name,"Nimal");
    strcpy(b[0].catogory,"General");
    b[0].type=1;
    b[0].range1=250;
    b[0].range2=0;
    b[0].range3=0;

    b[1].bill_number=6065;
    strcpy(b[1].name,"Kamal");
    strcpy(b[1].catogory,"Industrial");
    b[1].type=2;
    b[1].range1=622;
    b[1].range3=1999;
    b[1].range3=102;

    b[2].bill_number=7067;
    strcpy(b[2].name,"Gayani");
    strcpy(b[2].catogory,"General");
    b[2].type=2;
    b[2].range1=220;
    b[2].range2=350;
    b[2].range3=10;

    menu(b,3);






}

