// Display warning message when low on gas
#include <stdio.h>

int main(){
	
	int level, temp;
	printf("Enter the amount of gas left: ");
	scanf("%d", &level);
	
	printf("Enter the temperature: ");
	scanf("%d", &temp);
	
	if(level <= 5){
	
	
		printf("Low on Gas!!!!!!\n");
	}
	else
	{
		printf("Your Fine\n");
	}
	
	if (temp >= 80)
	{
		printf("Please turn on air conditioner");
	
	}
	else{
		printf("You do not need to turn on the AC");
	}
	
	return;
}
