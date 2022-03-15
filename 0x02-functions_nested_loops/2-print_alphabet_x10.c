#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet, in lower case, followed by new line, ten times
 * Return: null
 */
void print_alphabet_x10(void);
{
	char ch;
	for (int x = 1; x <= 10; x++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
