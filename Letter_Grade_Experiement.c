#include <stdio.h>

int main(){
	int Mark;
	char Letter;
	
	printf("Enter your grade: ");
	scanf("%d", &Mark);
	
	if (Mark >= 80){
		Letter = 'A';
	}
	else if (Mark <= 79 && Mark >= 70){
		Letter = 'B';
	}
	else if (Mark <= 69 && Mark >= 60){
		Letter = 'C';
	}
	else{
		Letter = 'F';
	}
	
	printf("Your letter grade is %c", Letter);
	
	return;
}
