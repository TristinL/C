//Tristin Lehman
//Illustrating pointers


#include<stdio.h>

int main()
{
	int counter = 64, x;
	
	int *int_pointer;
	
	int_pointer = &counter;
	
	x = *int_pointer;
	
	printf("count = %i, x = %i\n", counter, x);
	
	return 0;
}
