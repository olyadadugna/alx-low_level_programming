#include "main.h"

/**
 * print_triangle - print a triangle
 * @i: size of the triangle
 */
void print_triangle(int i)
{
	int j, k;

	if (i > 0)
	{
		for (j = 1; j <= i; j++)
		{
			for (k = i - j; k > 0; k--)
				_putchar(' ');
		
			for (k = 0; k < j; k--)
				_putchar('#');

			if (j == i)
			       continue;
			
			_putchar('\n');
		}
	}
	
	_putchar('\n');
}	
