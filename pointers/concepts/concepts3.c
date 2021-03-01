#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*We can set the pointer to point to 
	a variable that already exists in our code*/
	
	int x = 10; // variable
	int *p; // pointer
	// pointer to the x variable. p stores the memory x's value 
	p = &x;
	printf("x = %d\n", x); // 10
	printf("&x = %d\n", &x); // x's memory address
	printf("p = %d\n", p); // x's memory address
	
	
	return 0;
}