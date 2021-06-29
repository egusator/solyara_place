#include <stdio.h>
#define TABSIZE 8


int main () {	

	int i = 0;
	char c; 
	c = getchar(); 
	while(c != EOF) {
		if (c == '\t') {
		    for (i = 1; i <= TABSIZE; ++i) 
			    putchar(' '); 
		} else putchar(c); 
		c = getchar(); 
		if (c == EOF) {
			putchar('\n');  	
		}
		
	}
	return 0; 


}











