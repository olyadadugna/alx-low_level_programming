#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int j, k, i;

	if (size <= 0)
	{
		for (i = size; i >= 1; i--)
		{
			for (j = 1; j < i; j++)
				{
					_putchar(' ');
				}
			for (k = size-i; k >= 0; k--)
				{
					_putchar('#');
				}
			_putchar('\n');
		}
	_putchar('\n');
	}	
}
