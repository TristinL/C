// Metric converter

#include <stdio.h>

int main(){
	
	double metric;
	float standard;
	char conv_type;
	
	printf("Enter the metric value and type of converstion (lovercase)");
	scanf("%lf\n%c", &metric, &conv_type);
	
	if (conv_type == 'd'){
		
		standard = 0.6214 * metric;
	}
	if (conv_type == 'w'){
	
		standard = 2.2046 * metric;
	}
	if (conv_type == 'v'){
		
		standard = 0.8772 * metric;
	}
	
	else{
		printf("invalid code\n");
	}
	
	printf("The standard value is: %0.2f", standard);
	
	return 0;
}
