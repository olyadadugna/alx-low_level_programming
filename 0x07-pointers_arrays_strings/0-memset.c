#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: A pointer to memory area to be filled
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * description _memset: over there
 * Return: A pointer to the filled memory area
 */
char *_memset(char *s, int b, unsigned int n)
{
	unsigned int a;
	
	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
