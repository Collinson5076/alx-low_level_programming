#include "main.h"
/**
 * swap_int - Swaps the values of two integers.
 * @a: A pointer to an integer to swap.
 * @b: A pointer to an integer to swap.
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
