//Tristin Lehman
// Array problem

//Uzma
// 11-2-16

#include<stdio.h>
#define LIST_SIZE 6

int main()
{
	int list[LIST_SIZE] = {30, 12, 51, 17, 45, 62};
	
	int odd_value;
	
	for (int c = 0; c < 6; c++)
	{
		if (list[c] % 2 != 0)
		{
			odd_value += list[c];
		}
	}
	printf("Sum of odd numbers is %u", odd_value);
}
