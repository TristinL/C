// calculates and prints the sum of all even integers from 2-30
// exercise 4.12

#include <stdio.h>

int main(){
	unsigned int sum = 0; // current sum of interger
	
	//loop through even integer up to 30
	
	for (unsigned long i = 2; i <= 30; i += 2){
		sum += i; //add i to sum
		printf("sum of the even integers from 2 to 30 is %u\n", sum);
	}
	
}
