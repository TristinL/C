#include <stdio.h> /*print f, scand definitions */

#define TAX_RATE 0.06

int main (void)
{
	double pay_rate;
	
	printf("What is your pay rate? > ");
	
	scanf("%lf", &pay_rate);
	
	double gross_pay = pay_rate - (TAX_RATE * pay_rate);
	
	printf("Total Pay is:%.2f", gross_pay);
	
	return (0);
}
