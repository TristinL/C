//Tristin Lehman
// 11-16-16
// Structures

// Where arrays can only hold elements of a single data type; Structures can hold elements of multiple data types


#include<stdio.h>

struct date{
	int month;
	int day;
	int year;
};
int main()
{
//	int month;
//	int day;
//	int year;
//	
//	int perchaseMonth;
//	int perchaseDay;
//	int perchaseYear;
	
//	struct date{
//		int month;
//		int day;
//		int year;
//	};
	struct date today, tomorrow;
	printf("Enter today's date (mm dd yyyy): ");
	scanf("%i%i%i", &today.month, &today.day, &today.year); 	//***** The .month, or .year instruct the compiler to save the given value to the structure "date" for the "today" sub-catagory *****
	
	tomorrow.month = today.month;
	tomorrow.day = today.day + 1;
	tomorrow.year = today.year;
	
	
	
	printf("%i-%i-%i", tomorrow.month, tomorrow.day, tomorrow.year);
	
	return;
}

