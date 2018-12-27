//Tristin Lehman
// 11-9-16
//Uzma
// U.S to Metric Converter

#include<stdio.h>

void UStoMetric(double Feet, double Inches)
{
	double ChangeFeet_Inch = ((Feet * 12) * 2.54);
	double ChangeInch = Inches * 2.54;
	
	printf("The total height of this person in centimeters is %.2f", (ChangeFeet_Inch + ChangeInch));
}

int main()
{
	double Feet, Inches;
	
	printf("Please enter the height of the individual in feet and inches: ");
	scanf("%lf%lf", &Feet, &Inches);
	
	UStoMetric(Feet, Inches);
}
