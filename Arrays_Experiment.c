//Tristin Lehman
// 10/17/16
// Arrays

#include<stdio.h>
#include<math.h>

#define SIZE 10


int main()
{
	double Fractions[SIZE] = {0.0};
	
	printf("%d", Fractions[3]);
	
	Fractions[8] = 1.667;
	
	Fractions[6] = 3.333;
	
	printf("%.2f, %.2f\n", Fractions[6], Fractions[8]);
	
	for (int x = 0; x <= 9; x++)
	{
		printf("%.2f\n", Fractions[x]);
	}

}
