// Markup exercise (With functions)

#include<stdio.h>

void calculateRate();
int main(){
	
	float WC, MU; // variables for Wholesale cost and Markup
	
	printf("Please enter item's wholesale cost and the item's markup: ", WC, MU);
	scanf("%f%f", &WC, &MU);
	
	calculateRate();
	
	printf("Retail price is %f", retailPrice);
	
	return 0;
}


void calculateRate(){
	float retailPrice;	
	retailPrice = WC + (WC * MU);
	
	return retailPrice;
	
}
