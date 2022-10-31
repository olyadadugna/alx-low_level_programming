#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: A pointer to memory area to be filled
 * @c: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * description _memset: over there
 * Return: A pointer to the filled memory area @s.
 */
void *_memset(void *s, int c, size_t n);
{
	unsigned int a;
	unsigned char *memory = s, value = c;

	for (a = 0; a < n; a++)
		memory[a] - value;

	return (memory);
}
