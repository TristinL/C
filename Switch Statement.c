// Using a switch statement

#include <stdio.h>

int main(){
	
	char choice;
	printf("%s", "Enter A, B, or C: \n\n");
	scanf("%s", &choice); //%s, string input
	
	switch(choice){ //Switch statement
		case 'A': //Beginning switch statement with ':' and case.
		case 'a': //Allows user to input lowercase without any error, like an or statement, can be done with an if statement
			printf("%s", "You have entered A.\n");
			break; //Break prevents the other options from appearing after input
		
		case 'B':
		case 'b':
			printf("%s", "You have entered B.\n");
			break;
		
		case 'C':
		case 'c':
			printf("%s", "You have entered C.\n");
			break;
			
		default: //Default statement prevents users from inputting other things aside from what's asked for
			printf("%s", "A, B, or C was not entered, please try again.");
	}
	
	return 0;
}
