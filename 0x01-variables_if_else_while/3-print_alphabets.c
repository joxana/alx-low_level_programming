#include <stdio.h>
/**
 * main - entry of the program
 *
 * Description: this program prints small letter
 * Return: zero(success)
 */
int main(void)
{
char a;
char b;
for (a = 'a'; a <= 'z'; a++)
{
	putchar(a);
}
for (b = 'A'; b <= 'Z'; b++)
{
	putchar(b);
}
printf("\n");
return (0);
}
