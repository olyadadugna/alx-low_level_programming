#include "main.h"

int find_sqrt(int num, int root);
int _sqrt_recursion(int n);

/**
 * find_sqrt - finds the natural square root
 * @num: the number to find the square root 
 * @root: the root to be tested
 *
 * Return: if the number natural square root - the square root
 * 	if the number does not have a natural square root - -1
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
}
