// Πρόγραμμα χρήσης structure
#include <stdio.h>

int main (void){
	struct date{
		int day;
		int month;
		int year;
	};
	struct date today;
	today.day = 14;
	today.month = 11;
	today.year = 2024;
	printf ("Σήμερα είναι: %i/%i/%.2i.\n", today.day,today.month,today.year % 100);
	return 0;
}

/* gcc lecture07_1.c -o 07_1 */
