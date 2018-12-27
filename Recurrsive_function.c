//Tristin Lehman
//recurrsive function

#include<stdio.h>

//function prototype
unsigned long int factorial(unsigned int n);


int main()
{
	unsigned int j;
	for (j = 0; j < 11; j++)
	{
		//call to factorial function
		printf("%2u! = %1u\n", j, factorial(j));
	}
	return 0;
}
// main function stop

unsigned long int factorial(unsigned int n)		//unsigned allows ONLY possitive numbers/ values to be stored in a variable
{
	unsigned long int result;
	
	if (n==0)				//The == is used for comparrison and returns a 0 for false or 1 for true.
		result = 1;			// the = is used to store values and is the literal definition
	else
		result = n * factorial(n-1);
	return result;
}
