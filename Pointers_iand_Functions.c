//Tristin Lehman
// Using Pointers and functions

#include<stdio.h>


void test (int *int_pointer)
{
	*int_pointer = 100;
}


int main()
{
	void test (int *int_pointer);
	int i = 50, *int_pointer = &i;
	
	printf("Before the call to test i = %i\n", i);
	
	test (int_pointer);
	
	printf("After the call to test i = %i\n", i);
	
	return 0;
}
