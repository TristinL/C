//Tristin Lehman
// 11-23-16
// Structures for passing arrays of structures

#include<stdio.h>

int main()
{
	struct date
	{
		int month;
		int day;
		int year;
	};
	struct time{
		int seconds;
		int minutes;
		int hour;
	};
	
	struct dateAndTime{			// structure containing structures
		struct date sdate;
		struct time stime;
	};
	
}
