#include <stdio.h>

int main(void)
{
	int Age;

	printf("Input your Age: ");
	
	scanf("%d", &Age);
	
	if((Age >= 18) && (Age < 21) ){
		printf("You are still underage.");
	} // ends if
	else {
		printf("You are good to go");
	} // ends else
	return 0;
}
