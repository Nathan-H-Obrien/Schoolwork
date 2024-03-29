/*	This program calculates and prints the sum of 
	three numbers input by the user at the keyboard.
	   Written by: 
	   Date: 
*/
#include <stdio.h>

int main (void) 
{
//	Local Declarations 
	int a;
	int b;
	int c;
	int sum;

//	Statements 
	printf("\nWelcome. This program adds\n");
	printf("three numbers. Enter three numbers\n");
	printf("in the form: nnn nnn nnn <return>\n");
	scanf("%d %d %d", &a, &b, &c);

	// Numbers are now in a, b, and c. Add them. 
	sum = a + b + c;

	printf("The total is: %d\n\n", sum);

	printf("Thank you. Have a good day.\n");
	return 0;
}	//  main 

/*  Results:
Welcome. This program adds
three numbers. Enter three numbers
in the form: nnn nnn nnn <return>
11 22 33

The total is: 66

Thank you. Have a good day.
*/