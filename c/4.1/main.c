#include <stdio.h>

#define MAXLINE 1000 

int getl(char line[], int max); 

int strRightIndex(char source[], char searchfor[]); 

char pattern[] = "ould";

main(){
	char line[MAXLINE]; 
	int index = 0, found = 0; 

	if (getl(line, MAXLINE) > 0) {
		index = strRightIndex(line, pattern); 
		printf("\n \n %d \n \n ", index);
	}	

	
return found; 
}







