#include <stdio.h> 
#include <assert.h> 

int main() 
{ 
	char x = 7; 

	/* Some big code in between and let's say x 
	is accidentally changed to 9 */
	x = 9; 

	// Programmer assumes x to be 7 in rest of the code 
	assert(x==7); 

	/* Rest of the code */
	printf("hi..\n");

	return 0; 
} 

