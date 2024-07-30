#include <stdio.h>
#include <math.h>

int main()
{
    int a, first_digit, last_digit, digits;
	
    printf("Enter any number: ");
    scanf("%d", &a);
	
    last_digit = a % 10;     
    digits = (int)log10(a); 

    first_digit = (int)(a / pow(10, digits)); 

    printf("First digit = %d\n", first_digit);
    printf("Last digit = %d\n", last_digit);

    return 0;
}