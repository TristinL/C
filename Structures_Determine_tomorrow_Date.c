//Tristin Lehman
// 11-16-16
// Program to determine tomorrow's date

#include<stdio.h>

int main()
{
	struct date{
		int month;
		int day;
		int year;
	};
	struct date today, tomorrow;
	
	const int daysPerMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	printf("Entrer today's date (mm dd yyyy): ");
	scanf("%i%i%i", &today.month, &today.day, &today.year);
	
	if (today.day != daysPerMonth[today.month - 1]){		//deals with days that do not end a month
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	
	else if (today.month == 12){							//deals with 12-31-yyyy, the end of the year
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	
	else{													// deals with all other dates that end a month
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}
	
	printf("Tomorrow's date is: %i/%i/%i", tomorrow.month, tomorrow.day, tomorrow.year);
}
