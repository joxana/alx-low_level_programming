#include <stdio.h>
/**
* main is a entry point
*
*/
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

        printf("size of char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(li));
	printf("size of a long long int: %ld byte(s)\n", sizeof(lli));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
       	
