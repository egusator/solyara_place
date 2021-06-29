#include <stdio.h>

int main() {
	int length[100]; 
	int i = 0, currLen = 0; 
	char c; 
	for (i = 0; i < 100; i += 1) {
		length[i] = 0; 
	}
	while ((c = getchar()) != EOF) {
	    if (c == ' ' || c == '\t' || c == '\n') {
		++length[currLen-1];
		currLen = 0; 
	    } else {
		++currLen; 	    
	    }	    
	}	
	for (i = 0; i <100; i = i + 1) {
		if (length[i] != 0) 
		printf("Слов длины %d: %d \n", i + 1, length[i]); 
	}
	return 0; 
}	






