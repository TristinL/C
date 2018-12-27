//Tristin Lehman
//array problem 3

//Uzma
// 11-2-16

#include<stdio.h>
#define LIST 10

int main()
{
	int intList[LIST];
	int total;
	double percent;
	
	for (int c = 0; c < 10; c++)
	{
		printf("Enter the %u value: ", (c+1));
		scanf("%u", &intList[c]);
		total += intList[c];
	}
	for (int d = 0; d < 10; d++)
	{
		percent = (intList[d] / total);
		printf("	%u	|		%f\n", intList[d], percent);
	}
}
