#include <stdio.h>

#define LOWER 1
#define UPPER 14

int power(int cfc, int, int); 

int main() {
	int cfc = 0; 
	int x = 2, y = 0; 
	for (y = LOWER; y <= UPPER; ++y) {
	    printf("%d %d в степени %d: %d \n",cfc, x, y, power(cfc, x, y)); 
	}
	return 0; 
}
int power(int cfc ,int base, int n) {
        int i, p;
        p = 1;
	cfc = 1; 
        for (i = 1; i<=n; ++i) {
                p = p*base;
        }
        return p;
}




