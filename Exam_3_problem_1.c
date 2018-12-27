//Tristin Lehman
//Uzma
// Exam 3 #1
// 12-7-16

#include<stdio.h>
#define SIZE 10								//define SIZE to be 10

int main(){									//main program start
	double list[SIZE];						//create array of SIZE
	
	for (int c = 0; c < SIZE; c++){			//For loop to obtain list elements
		printf("\nPlease enter a value: ");	//Obtain data from user
		scanf("%lf", &list[c]);				//Save data to array
	}										//End for loop
	double ArrayAverage, ArrayHolder;		//Variables to hold array average and array total
	for (int d = 0; d < SIZE; d++){			//For loop to add array elements
		ArrayHolder += list[d];				//Add array elements and save to variable
	}										//End for loop
	ArrayAverage = ArrayHolder / SIZE;		//Determine array average
	
	printf("The average of the array is %f", ArrayAverage);		//Print array average
}											// main program end
