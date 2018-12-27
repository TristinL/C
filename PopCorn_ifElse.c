//Tristin Lehman
// 11-9-16
//Uzma
//Popcorn Time

#include<stdio.h>

void PrintPopcornTime(int bagOunces)
{
	if (bagOunces < 3)
	{
		puts("Too small\n");
	}
	else if (bagOunces > 10)
	{
		puts("Too large\n");
	}
	else{
		printf("%d seconds\n", (6 * bagOunces));
	}
}



int main()
{
	PrintPopcornTime(7);
	return 0;
}
