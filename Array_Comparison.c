//Tristin Lehman
// 11-7-16
// Uzma
// Array Comparison

#include<stdio.h>
#define CONSTANT 5

int main()
{
	double weight[CONSTANT] = {0.0};
	double averageWeight, totalWeight, maxWeight;
	
	for (int c = 0; c < CONSTANT; c++)
	{
		printf("Enter weight %i:\n", (c+1));
		scanf("%lf", &weight[c]);			// **%lf scans and saves doubles**
	}
	
	printf("You Entered: ");
	
	for (int d = 0; d <= 4; d++)
	{
		printf("%.2f ", weight[d]);	// **%f will print a double**
	}
		
	for (int s = 0; s < CONSTANT; s++)
	{
		totalWeight += weight[s];
		if (maxWeight < weight[s])
		{
			maxWeight = weight[s];
		}
	}
	averageWeight = totalWeight / CONSTANT
	
	printf("Total weight: %.2f\n")
}
