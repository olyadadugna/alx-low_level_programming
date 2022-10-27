#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int r;
	int j;

	for (r = 0; r < n; r++)
	{
		n--;
		j = a[r];
		a[r] = a[n];
		a[n] = j;
	}
}	
