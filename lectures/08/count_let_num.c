// C program to demonstrate working of isalpha() and isdigit().
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    char str1[] = "12abc12";
    char str2[] = "34αβγ56";
 
    int alphabet = 0, number = 0, i;
    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str1[i]) != 0) {     // check for alphabets
            alphabet++;
 	}      
        else if (isdigit(str1[i]) != 0) {    // check for decimal digits
            number++;
        }
    } 
    printf("Γράμματα = %d, Αριθμητικά ψηφία = %d\n", alphabet, number);
    alphabet = 0;
    number = 0;
    for (i = 0; str1[i] != '\0'; i++) {
        if (isalpha(str2[i]) != 0) {     // check for alphabets
            alphabet++;
 	}      
        else if (isdigit(str1[i]) != 0) {    // check for decimal digits
            number++;
        }
    } 
    printf("Γράμματα = %d, Αριθμητικά ψηφία = %d\n", alphabet, number);
    return 0;
}

/* gcc count_let_num.c -o cln  */
