// Πρόγραμμα εμφάνισης πίνακα των παραγοντικών των αριθμών 1 - 10
#include <stdio.h>

int main (void)
{
	int start = 1;
	int end = 10;
	int factorial = 1;
	
	printf(" n          n!  \n");
	printf("----    --------- \n");
	for(int i = start; i <= end; i++){
		factorial *= i;
		printf(" %2i      %7i \n",i,factorial);
	} 
	return 0;
}

/* gcc lab03_3a.c -o 03_3a */
