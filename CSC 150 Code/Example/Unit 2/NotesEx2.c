/*	This program demonstrates three ways to use constants.
	   Written by:
	   Date:
*/
#include <stdio.h>
#define PI 3.1415926536

int main (void)
{
// Local Declarations 
	const double cPi = PI;

// Statements 
	printf("Defined constant PI: %f\n", PI);
	printf("Memory constant cPi: %f\n", PI);
	printf("Literal constant:    %f\n", 3.1415926536);
	return 0;
}	// main 

/*	Results:
Defined constant PI:  3.141593
Memory constant cPi:  3.141593
Literal constant:     3.141593
*/