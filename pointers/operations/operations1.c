#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*Assignment: a pointer can only recieve 
	an address of a variable of the same type.*/
	
	int *p, *p1, x = 10;
	float y = 20.0;
	
	p = &x;
	printf("*p: %d\n", *p);
	printf("p: %d\n", p);
	p1 = p;
	printf("*p1: %d\n", *p1);
	printf("p1: %d\n", p1);
	p = &y; // wrong, so solve this.
	
	return 0;
}
