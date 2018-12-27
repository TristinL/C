//Tristin Lehman
// Using pointers in Expressions

#include<stdio.h>

int main()
{
	int i1, i2;
	int *p1, *p2;		//the * symbole indicates that these variables are pointer variables
	
	
	i1 = 5;
	*p1 = &i1;			// the & symbole does NOT assign i1 to the variable *p1. It acts as a window, allowing *p1 to look at the i1 variable and it's value at any time
	i2 = *p1 / 2 + 10;
	
}
