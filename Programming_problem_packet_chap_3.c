#include <stdio.h>

int main(void)
{
	int ITEM = 1.0;
	
	int PROD = 3.0;
	
	if (ITEM != 0.0){
		PROD = PROD * ITEM;
		printf("Value is equal to: %d", PROD);
	}
	
	else{
		printf("Value is equal to: %d", PROD);
	}
	return;
}
