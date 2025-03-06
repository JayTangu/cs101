#include <stdio.h>
using namespace std;

int main() {
	char a[] = "Hello";
	int len = sizeof(a);
	for(int i = len-1 ; i>=0 ; i--)
		printf("%c",a[i]);
}
