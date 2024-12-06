//Άσκηση 2
# include <stdio.h>

void show(int *p, int n){
        for(int i=0; i<n;i++){
          printf("%i \n",*(p+i));
        }
}
int main(){
	int a[5] = {11,21,31,41,51};
	
	show(a,5);
	return 0;
}

/* gcc lab09_2.c -o 09_2  */
