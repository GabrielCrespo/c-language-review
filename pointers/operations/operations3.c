#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*We can compare two pointers values
	==, !=, >, <, >= e <= */
	
	int *p, *p1, x, y;
	
	p = &x;
	printf("p = %d\n", p);
	p1 = &y;
	printf("p1 = %d\n", p);
	
	if(p > p1)
		printf("p > p1\n");
	else
		printf("p <= p1\n");
	
	return 0;
}
