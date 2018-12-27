//Tristin Lehman
// 11-7-16
//Uzma
//Tic-Tac-Toe

#include<stdio.h>

void PrintTicTacToe(char horizChar, char vertChar)
{
	for (int c = 0; c < 2; c++)
	{
		printf("x%cx%cx\n", vertChar, vertChar);
		for (int d = 0; d < 1; d++)
		{
			printf("%c%c%c%c%c\n", horizChar, horizChar, horizChar, horizChar, horizChar);
		}
	}
	printf("x%cx%cx\n", vertChar, vertChar);
	return;
}

int main()
{
	PrintTicTacToe('~', '!');
	
	return 0;
}
