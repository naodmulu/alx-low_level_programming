#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: pointer pointing to the first int
 * @b: pointer pointing to the second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
