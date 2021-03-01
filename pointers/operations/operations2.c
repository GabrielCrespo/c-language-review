#include <stdio.h>
#include <stdlib.h>

int main(){
	
	/*We can only add and subtract over a 
	memory address that is stored in a pointer*/
	
	int x = 10;
	
	int *p = &x; // value of x in memory
	printf("p = %d\n", p);
	p++;
	printf("p = %d\n", p); // value of x in memory + 1*4
	p += 15;
	printf("p = %d\n", p); // value of x in memory + 15*4
	p -= 2;
	printf("p = %d\n", p); // value of x in memory - 2*4
	
	/*When is added, the memory value advances n*sizeof(type) bytes
	When subtracted, the memory value goes back n*sizeof(type) bytes */
	
	// int type has 4 bytes of syze in memory
	// char type has 1 byte of syze in memory
	
	return 0;
}
