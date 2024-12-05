#include <stdio.h>

int main() {
	double pi = 4.0f;
	double PI = 4.0f;
	for(int i = 3; i <= 10000000 ; i+=4) {
		PI -= pi/i; 
		PI += pi/(i+2);
	}
	printf("%.5f",PI);
	return 0;
}
