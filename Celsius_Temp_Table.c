// Celsius Temperature Table

#include<stdio.h>


double celsius(int); // Prototype for the celsius function
int main(){
	int count = 0; // counting variable that represents counter and fahrenheit temperature
	int Start_Fah = 0;
	while (count <= 20){
		double Celsius_Temp; // placeholder for celsius temperature
		Celsius_Temp = celsius(Start_Fah);
		printf("%d\n", Celsius_Temp);
		++count;
		++Start_Fah;

	}
	return 0;
} // end of main function

double celsius(int Start_Fah)
{
	double C_Temp = ((5/9)*(Start_Fah - 32));
	
	return C_Temp;
}
