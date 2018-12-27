// 
#include<stdio.h>


void displayMessage(); // function prototype or function declaration (incase your function ccomes after the main program), this can be avoided by putting the function before the main program
int main(){
	printf("%s", "Hello from main. \n");
	displayMessage(); // call to displayMessage function
	printf("%s", "Back in function main again. \n");
	
	
	return 0;
	
}



void displayMessage(){ // function header, no return value becasue this is a function designed to make a MAIN program short and simple rather than give it specific information beyond the number or thing it calculates
	printf("%s", "Hello from the function displayMessage\n");
}
