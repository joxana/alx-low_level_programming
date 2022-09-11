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

        printf("the size of char: %ld byte(s)\n", sizeof(c));
	printf("the size of an int: %ld byte(s)\n", sizeof(i));
	printf("the size of a long: %ld byte(s)\n", sizeof(li));
	printf("the size of a long long: %ld byte(s)\n", sizeof(lli));
	return (0);
}
       	
