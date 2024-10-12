// Χρήση αριθμητικών τελεστών

#include <stdio.h>

int main (void)
{
	int a = 100;
	int b = 2;
	int c = 25;
	int d = 4;
	int result;
	double d_result;

	result = c % b;   		// modulo
	printf ("%i %% %i = %i\n",c,b,result);

	result = c * b;   		// πολλαπλασιασμός
	printf ("%i * %i = %i\n",c,b,result);

	d_result =  c / b;			// διαίρεση
	printf ("%i / %i = %.2f\n",c,b,d_result);

	d_result = (float) c / b;			// διαίρεση
	printf ("(float) %i / %i = %.2f\n",c,b,d_result);

	d_result = (float) c / (float) b;			// διαίρεση
	printf ("(float) %i / (float) %i = %.2f\n",c,b,d_result);	

	return 0;
}

/* gcc lecture02_4.c -o 2_4 */
