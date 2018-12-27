#include <stdio.h>

int main(){
	char Letter;
	int Tax_Form;
	
	printf("Tax Information System\n\n Select your civil status:\n\n <M>       Married\n <S>       Single\n <W>       Widwed\n <D>       Divorced\n\n Enter here> ");
	scanf("%c", &Letter);
	
	if (Letter == 'M'){
		Tax_Form = "TX-120-9";
	}
	if (Letter == 'S' || Letter == 'W'){
		Tax_Form = "TX-113-2";
	}
	if (Letter == 'D'){
		Tax_Form = "TX-121-7";
	}
	if (Letter == 'd'){
		Tax_Form = "Please enter an Upper case Letter";
	}
	if (Letter == 's'){
		Tax_Form = "Please enter an Upper case Letter";
	}
	if (Letter == 'w'){
		Tax_Form = "Please enter an Upper case Letter";
	}
	if (Letter == 'm'){
		Tax_Form = "Please enter an Upper case Letter";
	}
	printf("You must fill out tax form %s", Tax_Form);
	
	return;
}
