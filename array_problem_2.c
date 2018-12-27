//Tristin Lehman
// Array problem 2

//Uzma
// 11-2-16

#include<stdio.h>
#define LIST_SIZE 6

int main()
{
	int list[LIST_SIZE] = {30, 12, 51, 17, 45, 62};
	
	int even_value;
	
	for (int c = 0; c < 6; c++)
	{
		if (c % 2 != 1)
		{
			even_value += list[c];
		}
	}
	printf("Sum of even numbers is %u", even_value);
}
