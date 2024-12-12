#include <stdio.h>

int main() {
	double pi = 4.0f;
	double PI = 4.0f;
	long test = 0;
	int x = 0;
	for(int i = 3; i <= 1000000 ; i+=2) {
		if((i/2)%2==1)
			PI -= pi/i; 
		else
			PI += pi/(i);
		test = Pi * 100000
		if(test==314159) {
			x = i;
			break;
		}
	}
	
	printf("%.5f and x = %d",PI, x);
	return 0;
}
