// Using a switch statement

#include <stdio.h>

int main(){
	
	char choice;
	printf("%s", "Enter A, B, or C: \n\n");
	scanf("%s", &choice); //%s, string input
	
	if (choice == 'A' || choice == 'a') //Using if statement in place of switch statement, || = 'or'
	{
		printf("%s", "You entered A.");
	}
	else if (choice == 'B' || choice == 'b')
	{
		printf("%s", "You entered B.");
	}
	else if (choice == 'C') || choice == 'c')
	{
		printf("%s", "You entered C.");
	}
	else
	{
		printf("%s", "You didn't enter A, B, or C. Please try again.")
	}
	return 0;
}
