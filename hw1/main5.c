#include <stdio.h>
using namespace std;

void print_sp(int i, int n) {
		printf("%*d",i,n);		
}

void print_num(int n) {
	int pow = 1;
	while(pow<n) {
		printf(" %d",n);
		pow+=1;
	}
	printf("\n");
}

int main() {
	int rows=6;
	int cl = rows;
	for(int n = 1 ; n <= rows; n++) {
		print_sp(cl,n);
		print_num(n);
		cl--;
	}
}
