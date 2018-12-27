//Tristin Lehman
//Programming in C
// 10/16/16

#include<stdio.h>
#include<math.h>


double presentValue(double, double, double); //function prototype
char doAgain;
double futureValue, years; 				// initiate variables for future value and number of years money is left in the bank
double interestRate;							// initiate variable for annual interest rate	


int main() 									//program start
{

	do										// do function start
	{
		printf("Future value desired: $ : \n", futureValue);
		scanf("%lf", &futureValue);
		
		printf("The Annual interest rate: \n", interestRate);
		scanf("%lf", &interestRate);
		
		printf("The number of years: \n", years);
		scanf("%lf", &years);
		
		printf("The present value is: %0.2f\n", presentValue(futureValue, interestRate, years));
		
		printf("Perform another calculation (1 for yes or 2 for no)?: ", doAgain);
		scanf("%d", &doAgain);
		
		
	}										//do function ends
	while (doAgain == 1);
	
	return 0;
} 											// program ends

double presentValue(double futureValue, double interestRate, double years) //presentValue function
{											// function start
	double P_Value = (futureValue / (pow(1 + interestRate, years)));
											// initiate variable to store present value and perform calculation to determine present value
	return P_Value;							// return present value
}											// function end
