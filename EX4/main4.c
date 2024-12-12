#include <stdio.h>

int main() {
	int i = 1234567;
	i += 10000;
	int n = i%10000/1000;
	i -= 1000*n;
	int m = i%10;
	i -= m;
	i += n + 1000*m - 10000;
	printf("%d",i);
	return 0;
}
