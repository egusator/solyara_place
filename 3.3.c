#include <stdio.h>
#include <string.h>

#define LIM 256
void expand(char s1[], char s2[]); 

int main() {
	int i = 0, j=0, d=0; 
	char c; 
	char s1[LIM + 2], s2[10000]; 
	while (i < LIM && (c = getchar()) != '\n' && c != EOF)  {
		s1[i++] = c; 
	}

	s1[i+1] = '\n'; 
	s1[i+2] = '\0'; 
	 
	 for (i = 0; i <(strlen(s1)); i++) {
                if (s1[i] == '-') {
                        for (j = s1[i-1]; j <= s1[i+1]; j++) {
                                        putchar(j);  
                        }       
                }

        }

	
	/*expand(s1, s2);*/ 
	for(i = 0; s2[i] != '\0'; i++) 
		printf("%c", s2[i]); 
	return 0; 
}

void expand(char s1[], char s2[]) {
	int i = 0, j = 0, c = 0; 
	if (s1[0] = '-') {
		for (j = 1; j <= s1[1]; j++)
			s2[j] = j; 
		c = j; 	
	}
       	
	for (i = 0; i <(strlen(s1)-1); i++) {
		if (s1[i] = '-') {
			for (j = s1[i-1]; j <= s1[i+1]; j++) {
					s2[c] = j; 
					c = c + 1;
			}	
		}

	}

}






