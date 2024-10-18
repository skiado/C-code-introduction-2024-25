// Χρήση αριθμητικών τελεστών

#include <stdio.h>
#include <math.h>

int main (void)
{
	double x = 1.75;
	double pol;

	pol = pow(x,3) + (4 * pow(x,2)) - (7 * x) + 1;
	printf ("για χ = %.2f\nx^3 + (4 * x^2) - (7 * x) + 1 = %.2f\n", x, pol);	

	return 0;
}

/* gcc lab02_2.c -o 02_2 -lm*/
