#include <stdio.h> /*print f, scand definitions */
#define KMS_PER_MILE 1.609

int main (void)
{
	//const KMS_PER_MILE = 1.609
	double miles, kms; /*distance in miles*/
				/*equivalent distance in kilometers */
			
	/*Get the distance in miles. */
	
	printf("Enter the distance in miles > ");
	
	scanf("%lf", &miles);
	
	/*Convert the Distance to kilometers */
	kms = KMS_PER_MILE * miles;
	
	/* Display the distance in kilometers. */
	
	printf("That equals %.2f Kilometers. \n", kms);
	
	return (0);
}
