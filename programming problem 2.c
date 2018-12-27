#include <stdio.h>

int main(void)
{
	char A_char = (char)'A';
	char B_int;
	int input_19;
	float input_neg;
	
	printf("Type input for second: ");
	
	scanf("%c", &B_int);
	
	printf("Type input for third: ");
	
	scanf("%d", &input_19);
	
	printf("Type input for fourth: ");
	
	scanf("%f", &input_neg);
	
	printf("%c\n %c\n %d\n %f", A_char, B_int, input_19, input_neg);
	
	return 0;
}
