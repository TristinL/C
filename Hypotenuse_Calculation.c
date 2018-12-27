// Tristin Lehman
#include<stdio.h>
#include<math.h>

double hypotenuse(double, double);
int main()
{
	int counter;
	for (counter = 1; counter <= 3; counter++)
	{
		double side1, side2, side3;
		printf("Enter the sides of triangle: \n", side1, side2);
		scanf("%lf%lf", &side1, &side2);
		
		side3 = hypotenuse(side1, side2);
		
		printf("The hypotenuse is %f\n", side3);
	}
	return 0;
}

double hypotenuse(double s1, double s2)
{
	double Hypo = sqrt(pow(s1, 2)+ pow(s2, 2));
	return Hypo;
}
