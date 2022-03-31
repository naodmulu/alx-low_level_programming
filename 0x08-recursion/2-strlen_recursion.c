#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @a: pointer the string
 * Return: int
 */

int _strlen_recursion(char *a)
{
int n = 0;

if (*a > '\0')
{
	n += _strlen_recursion(a + 1) + 1;
}

return (n);
}
