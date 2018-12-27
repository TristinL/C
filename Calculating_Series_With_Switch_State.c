// Switch statement #2

#include <stdio.h>

int main(){
	int product; // variable for product #
	
	// prompt for input
	puts("Enter pairs of item numbers and quantities:"); // Displays message on a NEW LINE without needing the escape character "\n"	Used to display only messages
	printf("Enter -1 for the item number to end input. \n"); // your normal print statement												Used for special formating i.e %s %d
	scanf("%d", &product);
	double total = 0.0;
	// loop while sentinel value (value on which the loop ends/ terminates) not read from user
	while (product != -1){
		int quantity; // quantity of current product
		scanf("%d", &quantity);
		// determine product, then perform calculation)
		switch (product){
			case 1:
				total += quantity * 2.98; // update total
				break;
			case 2:
				total += quantity * 4.50;
				break;
			case 3:
				total += quantity * 9.98;
				break;
			case 4:
				total += quantity * 4.49;
				break;
			case 5:
				total += quantity * 6.87;
				break;
			default:
				printf("Invalid product code: %d\n", product);
				printf("			Quantity: %d\n", quantity);
				
				
		}
		scanf("%d", &product); //get next input
	}
	// display total retail value
	printf("The total value was: %.2f\n", total);
}
