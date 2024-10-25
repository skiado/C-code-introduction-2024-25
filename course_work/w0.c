#include <stdio.h>

int main (void){
	float f;
	double d;
	int f1,d1;
	
	f = 0.1+0.2;
	d = 0.1+0.2;
	f1 = f==0.3;
	d1 = d==0.3;
	printf("float = %.15f  double = %.15f \n",f,d);
	printf("float == 0.3 -> %d  double == 0.3 -> %d \n",f1,d1);
	return 0;
}

// gcc w0.c -0 w0 
