#include "main.h"

/**
 * _puts - prints string
 * @str: pointer pointing to the string
 * Return: void
 */
void _puts(char *str)
{
	char c;

	while (*str)
	{
		c = *str++;
		_putchar(c);
	}
	_putchar('\n');
}
