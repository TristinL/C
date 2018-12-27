//Switch statement exercise
//Roman numeral converter
//Write program asking user to enter a number 1-10
//Switch statements will convert digit to Roman numeral

#include <stdio.h>

int main()
{
	int number; //Declaring variable, number
	printf("%s", "Enter an integer 1-10 to be converted to Roman numeral:\n");
	scanf("%d", &number); //Getting input
	
	if (number < 0 || number > 10) //Validating input is between 1 and 10
	{
		printf("%s", "Invalid input, please enter a valid integer between 1 and 10");
	}
	else
	{
		switch(number) //Beginning switch statement within else statement
		{
			case 1: //No quotes required since it's an integer
				printf("%s", "Your Roman numeral is: I");
				break; //Break so the output isn't repeated with other cases
		
			case 2: //No quotes required since it's an integer
				printf("%s", "Your Roman numeral is: II");
				break; //Break so the output isn't repeated with other cases
		
			case 3: //No quotes required since it's an integer
				printf("%s", "Your Roman numeral is: III");
				break; //Break so the output isn't repeated with other cases
		
			case 4: //No quotes required since it's an integer
				printf("%s", "Your Roman numeral is: IV");
				break; //Break so the output isn't repeated with other cases
		
			case 5: //No quotes required since it's an integer
				printf("%s", "Your Roman numeral is: V");
				break; //Break so the output isn't repeated with other cases
			case 6: //No quotes required since it's an integer
				printf("%s", "Your Roman numeral is: VI");
				break; //Break so the output isn't repeated with other cases
		
			case 7: //No quotes required since it's an integer
				printf("%s", "Your Roman numeral is: VII");
				break; //Break so the output isn't repeated with other 
			case 8: //No quotes required since it's an integer
				printf("%s", "Your Roman numeral is: VIII");
				break; //Break so the output isn't repeated with other cases
			case 9: //No quotes required since it's an integer
				printf("%s", "Your Roman numeral is: IX");
				break; //Break so the output isn't repeated with other cases
			case 10: //No quotes required since it's an integer
				printf("%s", "Your Roman numeral is: X");
				break; //Break so the output isn't repeated with other cases
		}
		
	}
	
	return 0;
}

