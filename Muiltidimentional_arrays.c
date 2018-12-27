// Tristin Lehman
// Using multidimensional array and functions

#include<stdio.h>
#include<math.h>

void displayMatrix(int matrix[3][5]); //function prototype
void scalarMultiply(int matrix[3][5], int scale);


int main() //main program start
{
	int matrix[3][5] = 		//define and initialize arrays
	{
		{7, 16, 55, 13, 12}, //These curly braces
		{12, 10, 52, 0, 7}, //are not required.
		{-2, 1, 2, 4, 9}, // They are optional.
	};
							//display "Original array"
	printf("Original matrix\n");
							//Call a function to display matrix and pass matrix as an arguement
	displayMatrix(matrix);
	
	scalarMultiply(matrix, 2);
	printf("Original matrix times 2\n");	
	displayMatrix(matrix);
	
	
	scalarMultiply(matrix, -1);
	printf("Original matrix times -1\n");
	displayMatrix(matrix);
	
	return 0;
}

void displayMatrix(int matrix[3][5])
{
	int row, colum;
	for (row = 0; row < 3; row++)
	{
		for (colum = 0; colum < 5; colum++)
		{
			printf("%5i", matrix[row][colum]);
		}
		printf("\n");
	}
}

void scalarMultiply (int matrix[3][5], int scale)
{
	int row, colum;
	for (row = 0; row < 3; row++)
	{
		for (colum = 0; colum < 5; colum++)
		{
			matrix[row][colum] *= scale;
		}
	}
}
