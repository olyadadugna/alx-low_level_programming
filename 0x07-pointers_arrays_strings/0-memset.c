#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * @s: A pointer to memory area to be filled
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled
 * description _memset: over there
 * Return: A pointer to the filled memory area
 */
void *memset(void *s, int c, size_t n)
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		s[index] = c;
		memory[index] = value;

	return (s);
	return (memory);
}
