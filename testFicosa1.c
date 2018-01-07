

#include <stdio.h>
#include <stdlib.h>


void CombineBytes ( unsigned char *a, unsigned char *b, unsigned char *result )
{
	unsigned char aa = *a<<5;
	unsigned char bb = *b>>3;
	*result = aa|bb;
}


int main(void) {

	unsigned char num1 = 0xAA;
	unsigned char num2 = 0x55;
	unsigned char result;

	CombineBytes(&num1, &num2, &result);
	printf ( "Combine 0xAA and 0x55 = 0x%x\n", result );
	CombineBytes(&num2,&num1,&result);
	printf ( "Combine 0x55 and 0xAA = 0x%x\n", result );

	return EXIT_SUCCESS;
}
