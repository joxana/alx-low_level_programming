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

        printf("size of char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long: %ld byte(s)\n", sizeof(li));
	printf("size of a long long: %ld byte(s)\n", sizeof(lli));
	return (0);
}
       	
