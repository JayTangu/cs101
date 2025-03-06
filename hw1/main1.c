#include <stdio.h>
using namespace std;

int main()	{
	char arr[] = "AABBBCCCCddd";
	int len = sizeof(arr) , count = 0;
	char current = arr[0];
	for(int i = 0 ; i < len ; i++) {
		if(arr[i] == current)
			count++;
		else {
			printf("%c%d",current , count);
			count = 1;
			current = arr[i];
		}
	}
	return 0;
}
