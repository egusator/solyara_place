#include <stdio.h>
#include <ctype.h>
#define LIM 10000
void htoi(char string[]); 

int main(){
	char source[LIM]; 
	int i = 0; 
	char c ; 
	 
	for (i = 0; i < LIM && (c = getchar()) != '\n'; ++i){
		source[i] = c; 
	}
	if ((c = getchar()) == '\n') {
		source[i] = '\n';
	       	source[i+1] = '\0'; 	
	}
	htoi(source); 
	return 0; 
}

void htoi(char string[]) {
	 
	int i = 0, num = 0; 
	while(string[i] != '\0'){
		if (isdigit(string[i])) {
			num = 16*num + (string[i] - '0'); 
		} else if (string[i] >= 'A' && string[i] <= 'F') {
			num = 16*num + (string[i] - 'A' + 10); 
		} else if (string[i] == ' ' || string[i] == '\t' || string[i] =='\n') {
			printf("%d ", num); 
		       	num = 0;	
		}
		i += 1; 
	}	

}	









