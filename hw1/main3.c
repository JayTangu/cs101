#include <stdio.h>
using namespace std;

int main() {
	char a[] = "10001111";
	int len = sizeof(a), count = 0;
	char a2[sizeof(len/4)];
	for(int i = 0 ; i < len/4 ; i++) {
		int mult = 8;
		for(int j = 0 ; j < 4 ; j++) {
			int num = a[i*4+j]-48;
			count += num*mult;
			mult /=2;
		}
		printf("%hx",count);
		count = 0;
	}
}
