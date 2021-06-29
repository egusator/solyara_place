#include <stdio.h>
#define LOWER 0
#define UPPER 50

float farToCel(float);
float celToFar(float);

int main() {
	int i; 
	
	for (i = LOWER; i <= UPPER; ++i) {
		printf("%d градусов по фаренгейту в цельсиях будет: \t %.1f \n", i, farToCel(i)); 
	}
	
        for (i = LOWER; i <= UPPER; ++i) {
                printf("%d градусов по цельсию в фаренгейтах будет: \t %.1f \n", i, celToFar(i));
        }
}	

float farToCel(float Far) {
	float p = (5.0/9.0)*(Far - 32.0); 
	return p; 
}

float celToFar(float Cel) {
	float p = (9.0/5.0)*Cel + 32.0;
	return p; 
}







