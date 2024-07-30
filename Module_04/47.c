include<stdio.h>
include<math.h>
struct point{
	int x;
	int y;
};
struct rectangle{
	struct point upper_left;
	struct point lower right;
};

int area(struct rectangle r)
{
	int length,breadth;
	length=r.lower_right.x - r.upper_left.x;
	breadth=r.upper_left.y -r.lower_right.y;
	return length*breadth;
}
int perimeter(struct rectangle r)
{
	int length,breadth;
	length=r.lower_right.x - r.upper_left.x;
	breadth=r.upper_left.y - r.lower_right.y;
	return 2*(length+breadth);
}
int main()
{
	int main_menu;  
	printf("Main menu\n");
	printf("1)Find gradient\n");
	printf("2)Test for real roots\n");
	printf("3)Rectangle area and parameter\n");
	printf("4)Exit\n");
	scanf("%d",main_menu);
	switch(main_menu)
	{
		case 1:
		printf("Find gradiant\n");
		{
			float x1;
			float x2;
			float y1;
			float y2;
			printf("Enter coordinates of A\n");
			printf("x1 y1\n");
			scanf("%f%f,&x1,&y1");
			
			printf("Enter coordinates of B\n");
			printf("x2 y2\n");
			scanf(%f%f,&x2,&y2);
			printf("Point B:%f%f\n"x2,y2);
			float gradient=(y2-y1)/(x2-x1);
			
			printf("Gradient of the two coordinates:%f",gradient);
		}
		break;
		case 2:
		printf("Test for real roots\n");
		{
			double a,b,c,qroot,root1,root2,real,imaginary; //b*b-a*a*c=qroot
			printf("Enter a b c\n");
			scanf("%f%f%f",&a,&b.&c);
			
			qroot=b*b-4*a*c;
			
			if(qroot>0)
			{
				root1=(-b+sqrt(qroot))/(2*a);
				root2=(-b+sqrt(qroot))/(2*a);
				printf("Root 1:%f\n",root1);
				printf("Root 2:%f\n",root2);
			}
			else if(qroot==0)
			{
				root1=root2=(-b/(2*a));
				printf("Root1 and Root2:%f",root1);
			}
			else
			{
				real=-b/(2*a);
				imaginary=sqrt(-qroot)/(2*a);
				printf("Root1:%f+%f and Root2 %f-%f",real,imaginary,real,imaginary);
			}
		}
		break;
		case 3:
		printf("calculate area and perimeter of a rectangle\n");
		{
			int choice;
			printf("1)Area of the rectangle\n");
			printf("2)Perimeter of the rectangle\n");
			scanf("%d",&choice);
			
			switch(choice)
			{
				struct rectangle r;
				printf("Enter the upper left coordinates of the rectangle:\n");
				scanf("%d %d",&r.upper_left.x,&r.upper_left.y);
				printf("Enter the lower right coordinates of the rectangle:\n");
				scanf("%d %d",&r.lower_right.x,&r.lower_right.y);
				printf("Area of the rectangle:%d",area(r));
			}
			break;
			
			case 2:
			printf("Perimeter of the Rectangle,Enter coordinates\n");
			{
				struct rectangle r;
				printf("Enter the upper left coordinates of the rectangle:\n");
				scanf("%d %d",&r.upper_left.x,&r.upper_left.y);
				printf("Enter the lower right coordinates of the rectangle:\n");
				scanf("%d %d",&r.lower_right.x,&r.lower_right.y);
				printf("Perimeter of the rectangle:%d",perimeter(r));
			}
			break;
		}
	}
	break;
	default:
	printf("Exit\n");
	exit(0);
	break;
	return 0;
}

