//Tristin Lehman
// 11-14-16
// Pyramid area
# include <stdio.h>

double PyramidVolume(double baseLength, double baseWidth, double pyramidHeight); //function prototype

int main() //program start
{
	double length, width, height, volume; //create variables to hold length, width, heigth, and volume
	printf("Please enter the length, width, and height of the rectangular pyramid: "); //ask for input from user
	scanf("%lf %lf %lf", &length, &width, &height); //save input to variables
	
	volume = PyramidVolume(length, width, height); //call funtion and assign to variable "volume"
	
	printf("Your value: %f", volume); //print the volume
}//program end

double PyramidVolume(double baseLength, double baseWidth, double pyramidHeight) //function header
{//function start
	double Volume, baseArea;											//Create variable to hold volume calculation
	
	baseArea = (baseLength * baseWidth);		//calculate base area
	
	Volume = baseArea * pyramidHeight *(1/3.0);	//Calculate volume and assign to variable "Volume"
	
	return Volume; //return the volume of the pyramid
}//function end
