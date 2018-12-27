//Tristin Lehman
// 11-14-16
// UserGuesses
#include<stdio.h>

#define NUM_GUESSES 3 //define number of allowed guesses

int main()//program start
{
	int userGuesses[NUM_GUESSES]; //define array userGuesses
	
	for (int c = 0; c < NUM_GUESSES; c++) //For loop
	{
		printf("Enter your %d guess: ", c+1); //Gathers input from user
		scanf("%i", &userGuesses[c]); //Saves input to array userGuesses
	}									//End for loop
	
	printf("Your output: %i, %i, %i", userGuesses[0], userGuesses[1], userGuesses[2]); //Prints values of userGuesses
}// program end
