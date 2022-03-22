#include "main.h"

/**
 * puts - prints a string, followed by a new line
 * @str: contains memory
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
