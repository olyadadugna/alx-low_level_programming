#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: numb of elements of array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int c;
	int b;

	for (c = 0; c < n; c++)
	{
		n--;
		b = a[c];
		a[c] = a[n];
		a[n] = b;
	}
}	
