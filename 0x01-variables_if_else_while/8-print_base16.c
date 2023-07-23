#include <stdio.h>
/**
 * main - is an entry point of execution
 *
 * Description: program prints the hexadecimal digits
 * Retrun: returns zero value
 */
int main(void)
{
	int hexa = 0;
	while (hexa >= 0 && hexa <= 15)
	{
	        hexa = 0x00;
		putchar(hexa);
		hexa++;
	}
	putchar('\n');
	return (0);
}
