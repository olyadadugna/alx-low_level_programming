#include "main.h"

/**
 * reverse_array - reverses content of an array of integers
 * @a: array of integers
 * @n: number of elements array
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int r:
	int j;

	for (r = 0; r < (n / 2); r++)
	{
		j = a[r];
		a[r] = a[n - r - 1];
		a[n - x - 1] = j;
	}
}	
