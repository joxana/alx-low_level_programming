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

        printf("the size of char: %ld byte(s)", sizeof(c));
	printf("the size of an int: %ld byte(s)", sizeof(i));
	printf("the size of a long: %ld byte(s)", sizeof(li));
	printf("the size of a long long: %ld byte(s)", sizeof(lli));
	return (0);
}
       	
