#include "main.h"

/**
 * _strien_recursion - returns the length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlrn_recursion(s));
}
