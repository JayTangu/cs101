#include <stdio.h>

int main() {
	double pi = 4.0f;
	double PI = 4.0f;
	int x = 0;
	for(int i = 3; i <= 1000000 ; i+=2) {
		if((i/2)%2==1)
			PI -= pi/i; 
		else
			PI += pi/(i);
		if(PI>=3.141585 && PI<=3.141594) {
			x = i;
			break;
		}
	}
	printf("%.5f and x = %d",PI, x);
	return 0;
}
