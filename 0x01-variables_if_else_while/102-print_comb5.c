#include <stdio.h>
#include <stdlib.h>

/**
 * main - print two two-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			putchar(' ');
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (a < 98)
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
