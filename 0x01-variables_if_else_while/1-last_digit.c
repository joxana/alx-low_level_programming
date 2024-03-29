#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - is an entry point
 *
 * Description - displays the last digit of a number
 * Return: returns 0 (success)
 */
int main(void)
{
int n;
int last_digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
if (last_digit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n"
	, n, last_digit);
}
if (last_digit == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
if (last_digit < 6 && last_digit != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n"
	, n, last_digit);
}
return (0);
}
