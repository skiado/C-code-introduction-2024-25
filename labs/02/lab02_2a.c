// Χρήση αριθμητικών τελεστών

#include <stdio.h>

int main (void)
{
	double x = 1.75;
	double pol;

	pol = (x*x*x) + (4 * (x*x)) - (7 * x) + 1;
	printf ("για χ = %.2f\nx^3 + (4 * x^2) - (7 * x) + 1 = %.2f\n", x, pol);	

	return 0;
}

/* gcc lab02_2a.c -o 02_2a */
