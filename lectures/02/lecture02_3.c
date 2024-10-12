// Χρήση αριθμητικών τελεστών

#include <stdio.h>

int main (void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;

	result = a - b;   		// αφαίρεση
	printf ("%i - %i = %i\n",a,b,result);

	result = b * c;   		// πολλαπλασιασμός
	printf ("%i * %i = %i\n",b,c,result);

	result = a / c;			// διαίρεση
	printf ("%i / %i = %i\n",a,c,result);

	result = a + (b * c);		// παρένθεση
	printf ("%i + (%i * %i) = %i\n",a,b,c,result);

	printf ("%i + %i * %i  = %i\n",a,b,c,a + b * c);

	return 0;
}

/* gcc lecture02_3.c -o 2_3 */
