//Tristin Lehman
//Uzma
// Exam 3 #2
// 12-7-16

#include<stdio.h>
double calculateRetail (double WholeSale, double MarkUp);				//function prototype

int main(){																// main program start
	double WholeSale, MarkUp;											//variables to hold cost and markup
	printf("\nPlease enter the item's wholesale cost and it's markup: ");	//obtaib data from user
	scanf("%lf%lf", &WholeSale, &MarkUp);								// save data to variables
	
	printf("The item's retail price is: %.2f", calculateRetail(WholeSale, MarkUp)); //print reatil cost and call function in print statement
}																					// main program end

double calculateRetail (double WholeSale, double MarkUp){		//Function start
	double RetailPrice;											// variable to hold retail price
	RetailPrice = WholeSale + (WholeSale * (MarkUp / 100));		// calculate retail price
	
	return RetailPrice;											//return retail price
}																//Function End
