// Πρόγραμμα εμφάνισης πίνακα των παραγοντικών των αριθμών 1 - 10
#include <stdio.h>

int main (void)
{
	int start = 1;
	int end = 10;
	
	printf(" n          n!  \n");
	printf("----    --------- \n");
	for(int i = start; i <= end; i++){
		int n = 1;
		for(int j = 1; j <= i; j++){
			n *= j;
		}
		printf(" %2i      %7i \n",i,n);
	} 
	return 0;
}

/* gcc lab03_3.c -o 03_3 */
