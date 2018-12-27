//Counter Controlled Repetition

#include <stdio.h>

int main(){
	int account; //current account #
	float credit; // current credit limit
	float balance; // current balance
	
	// Loop three times
	for (unsigned int i = 1; i <= 3; ++i){
		// Get the account #, Credit Limit, balance
		printf("%s", "\nEnter account number, credit limit, and balance: ");
		
		
		scanf("%u%f%f", &account, &credit, &balance);
		
		float new_credit = credit/2.0; //calculate new limit
		printf("New credit limit for account %u: %.2f\n", account, new_credit);
		
		//if current balace is greater than new_credit
		if (balance > new_credit){
			printf("limit exceeded for account %u\n", account);
		}
	}
}
