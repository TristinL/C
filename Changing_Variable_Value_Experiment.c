#include <stdio.h> /*print f, scand definitions */

int main (void)
{
	int X = 1;
	
	X = X + 1;
	
	++X;
	
	X++;
	
	// These are increment(++) and decrement(--) opporators from Chapter 3.

	int PRODUCT = 1;
	
	PRODUCT *= 2;
	
	PRODUCT = PRODUCT * 2;
	
	int SUM, Y;
	
	Y = 6;
	
	SUM = 2;
	
	SUM = SUM + Y;
	
	int NUMBER_1_10 = 1;
	while (NUMBER_1_10 < 11){
		NUMBER_1_10 = NUMBER_1_10 + 1;
	} //End while loop
	
	printf("%d, %d, The Sum is, %d", X, PRODUCT, SUM);
	
	printf("The sum is %d", NUMBER_1_10);
	
	return 0;
}
