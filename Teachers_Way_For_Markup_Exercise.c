//Teacher's way

#include<stdio.h>

double calculateRetail(double, double);
int main(){
	
	double wholesale,			// Wholesale price of the item
			markup,				// Markup percentage for that item
			sellingPrice;		// Retail selling price of the item
			// Get and validate user inputs
	printf("%s", "Enter the item's wholesale cost: ");
	scanf("%lf", wholesale);
	printf("%s", "Enter the item's markup percentage (e.g. 15.0): ");
	scanf("%lf", markup);
	
	while (wholesale < 0 || markup <= 0){ // This is an internal test to ensure that the values entered by the user are correct
		printf("%s", "Re-enter the wholesale or markup values");
		printf("%s", "Enter the item's wholesale cost: ");
		scanf("%lf", wholesale);
		printf("%s", "Enter the item's markup percentage (e.g. 15.0): ");
		scanf("%lf", markup);
	
	}
	
	
	sellingPrice = calculateRetail(wholesale, markup);
	printf("%s", "The retail price for this item is %f\n", sellingPrice);

	return 0;
} // end of the main function

double calculateRetail(double whole, double pct){
	double price = whole + (whole * (pct/100)); // Calculate retail price
	return price;								// and pass it back to main
} // end of the calculateRetail function
