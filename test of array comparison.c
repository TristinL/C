// tests for array comparison

#include<stdio.h>
#include<string.h>
#define SIZE 3

int main(){
	int proceed = 1;
	char go;
	size_t i;
	int choice;
	char user_start[SIZE] = "yes";
//	printf("%c %c %c", user_start[0], user_start[1], user_start[2]);
//	
//	for (i = 0; i < (sizeof(user_start)/ sizeof(char)); i++){
//		printf("%c\n", user_start[i]);
//	}
//	while (proceed == 1){
//		printf("would you like to continue (1 for yes, 2 for no): ");
//		scanf("%i", &choice);
//		
//		if (choice == 2){
//			break;
//		}
//	}

	while (user_start[SIZE] == 'y'){
		printf("hello");
		printf("Would you like to continue");
		scanf("%c", &go);
		
		if(go == 'n'){
			break;
		}
	}
}
