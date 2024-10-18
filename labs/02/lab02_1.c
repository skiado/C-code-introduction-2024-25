// Χρήση αριθμητικών τελεστών

#include <stdio.h>

int main (void)
{
	float f = 97;
	float c;

	c = (f - 32) / 1.8;
	printf ("%.2f F = %.2f C\n", f,c);	

	return 0;
}

/* gcc lab02_1.c -o 02_1 */
