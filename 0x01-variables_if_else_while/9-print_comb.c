#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints all possibele single digit
 * Return: returns 0
 */
int main(void)
{
	int n = 48;
	int c = 44;
	while (n >= 48 && n <= 57)
	{
		putchar(n);
		putchar(c);
		putchar(' ');
		n++;
	}
return (0);
}
