#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer of the string
 * Return: void
 */
void rev_string(char *s)
{
	int front = 0, back;

	back = _strlen(s) - 1;

	while (back > front)
	{
		char temp;

		temp = *(s + back);
		*(s + back) = *(s + front);
		*(s + front) = temp;
		back--;
		front++;
	}
}
