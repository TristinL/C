// exercise 4.21

#include <stdio.h>

int main(){
	unsigned int counter = 0; // define counter
	
	for (; counter <= 10; ++counter){
		printf("%u\n", counter);
	}
	printf("\n The final value of the counter after the loop terminates is: %u\n", counter);
	
}
