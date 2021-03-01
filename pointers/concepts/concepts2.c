#include <stdio.h>
#include <stdlib.h>

int main(){

	/*Not initialized pointers points to 
	an undefined place in memory.*/
	int *p;
	
	/*NULL is a special type and it indicates 
	that the pointer points to nowhere*/
	int *p = NULL;
	
	return 0;
}