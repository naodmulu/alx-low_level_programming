#include "main.h"

/**
 * _strlen - finds length of string
 * @s: string whose length is to be find
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int length = 0;
		while (*s++)
		{
			++length;
		}
	return (length);
}
