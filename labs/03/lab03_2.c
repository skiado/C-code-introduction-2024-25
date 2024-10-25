// Πρόγραμμα εμφάνισης πίνακα των τριγωνικών των αριθμών 5 - 50 ανά 5
#include <stdio.h>

int main (void)
{
	int start = 5;
	int end = 50;
	int triangular;
	
	printf(" n        Τριγωνικός  \n");
	printf("----    ------------- \n");
	for(int n = start; n <= end; n += 5){
		triangular = (n * (n+1)) / 2;
		printf(" %2i        %4i \n",n,triangular);
	} 
	return 0;
}

/* gcc lab03_2.c -o 03_2*/

