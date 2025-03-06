#include <stdio.h>
using namespace std;

int main() {
	char a[] = "A4B1C3f3";
	for(int i = 0 ; i<sizeof(a);i+=2) {
		int j = 0;
		char ch = a[i];
		int num = (int)a[i+1]-48;
		while(j < num) {
			printf("%c",ch);
			j+=1;
		}
	}
	return 0;
}
