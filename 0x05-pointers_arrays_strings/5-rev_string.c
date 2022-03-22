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

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 **/
int _strlen(char *s)
{
	int var;
	int output = 0;

	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}
