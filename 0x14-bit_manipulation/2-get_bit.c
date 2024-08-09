#include <stdio.h>
#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: Number to check bits in.
 * @index: Index of bit to get.
 *
 * Return: Value of the bit, or -1 if there is an error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, get;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	div = 1 << index;
	get = n & div;
	if (get == div)
		return (1);
	return (0);
}
