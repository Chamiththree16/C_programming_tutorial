#include <stdio.h>

int main(){
	int var=20;
	int *ip;
	
	ip=&var;
	
	printf("Address of var variable : %d\n", &var);
	
	printf("Address stored in ip variable: %d\n", ip);
	
	
	printf("Value of *ip variable : %d\n", *ip);
		printf("Value of variable var : %d\n", var);
	return 0;


}