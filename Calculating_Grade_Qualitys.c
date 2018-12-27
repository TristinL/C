// Tristin Lehman
#include <stdio.h>

int toQualityPoints(int average);
int main()
{
	for (unsigned int loop = 1; loop <= 5; ++loop) // unsigned varables cannot hold negative numbers such as -1, -5
	{
		printf("%s", "Enter the student's average:");
		int average; // current average
		scanf("%d", &average);
		// determine and display corresponding quality points
		printf("%d on a 4-point scale is %d\n", average, toQualityPoints(average));
	}
}
//loop for 5 inputs


int toQualityPoints(int average){
	if (average >= 90)
	{
		return 4;
	}
	else if (average >= 80)
	{
		return 3;
	}
	else if (average >= 70)
	{
		return 2;
	}
	else if (average >= 60)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}
