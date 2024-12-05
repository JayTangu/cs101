#include <stdio.h>

int main() 
{
  int n = 7;
  int h = 1;
  for(int i = n ; i >= 1 ; i--) {
	  printf("%*s",i-1,"");
    for(int j = 1 ; j <= h ; j++) {
    		printf("%d ",h);
		}
  printf("\n");
  h++;
}
	 
    return 0;
}
