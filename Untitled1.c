#include<stdio.h>
#define SIZE 20


int main(){
  const char *input[SIZE];
  
  printf("please enter a formula:");
  scanf("%c", &input);
  
  for (int i = 0; i <= SIZE; i++){
  	printf(input[i]);
  }
}
