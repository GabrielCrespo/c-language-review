#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*To access the value of a variable pointed to 
	by a pointer, we can use the * operator. */
	
	int x = 10; // variable
	int *p; // pointer
	// pointer to the x variable. p stores the x's memory value 
	p = &x;
	printf("x = %d\n", x); // 10
	printf("p = %d\n", p); // x's memory address
	printf("*p = %d\n", *p); // 10
	
	return 0;
}