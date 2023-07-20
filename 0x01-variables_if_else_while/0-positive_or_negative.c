#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - random number assigner
 *
 * Description:  assign a random number to the variable n each time
 * Return: returns (0);
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive,n\n");
	}
	if (n < 0)
	{
		printf("%d is negative,n\n");
	}
	if (n == 0)
	{
		printf("%d is zero,n\n");
	}
	return (0);
}
