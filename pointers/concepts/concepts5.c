#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/* The * operator allows us to modify 
	the content of the position that is pointed */
	
	int x = 10; // variable
	int *p; // pointer
	// pointer to the x variable. p stores the x's memory value. 
	p = &x;
	printf("x = %d\n", x); // 10
	*p = 12;
	printf("*p = %d\n", *p); // 12
	printf("x = %d\n", x); // 12
	
	return 0;
}