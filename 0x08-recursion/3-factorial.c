#include "main.h"

/**
 * factorial - Returns the factorial of a given numb
 * @n: the number to the factorial
 *
 * Return: if n > 0 - the factorial of n
 * 	if n < 0 - 1 to indicate an error
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);
}
