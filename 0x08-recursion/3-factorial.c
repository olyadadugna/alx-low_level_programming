#include "main.h"

/**
 * factorial - Returns the factorial of a given numb
 * @n: the number to the factorial
 *
 * Return: an integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
