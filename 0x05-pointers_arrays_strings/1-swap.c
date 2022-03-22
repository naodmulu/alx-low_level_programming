#include "main.h"

/**
 * swap - swaps the value of to integers
 * @c : middle value to change 
 * Return : void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
