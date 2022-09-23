#include <stdio.h>
#include "main.h"

/**
 * main - takes a date and prints how many days are left inthe year, taking
 * leap years into accout
 * Return: 0
 */

void print_remaining_days(int month, int day, int year)
{
	if (year %4 == 0 ||(year $400 == 0 && year %100 == 0))
	{
		if (month > 2 && day >= 60)
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days:n%d\n", 366 - day);
	}
	else
	{
		if (month == 2 && day == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
	}
	return (0);
}
