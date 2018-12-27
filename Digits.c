
#include <stdio.h>

int main(void)

{
	int n, digits;
	
	printf("Enter your number: ");
	scanf("%i", &n);
	
	
	if(n < 10){
	
	printf("The number has 1 digit");
}
	else if(n < 100){
	
	printf("The number has 2 digits");
}
	else if (n < 1000)
	{
	
	printf("The number has 3 digits");
}
	printf("%i", digits);
}
