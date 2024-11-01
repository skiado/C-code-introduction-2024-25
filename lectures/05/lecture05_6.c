//Random integers
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LEN 20
#define RAND_LIMIT 10

int main(){
	int m[20];
	// Για αριθμούς από 0 έως RAND_LIMIT - 1
	for(int i = 0; i < ARRAY_LEN; i++){
		m[i] = (rand() % 6)+1;    
	}
	for(int i = 0; i < ARRAY_LEN; i++){
		printf("%i, ",m[i]) ;
	}
	printf("\n");
	return 0;
}

/* gcc lecture05_6.c -o 05_6 */
