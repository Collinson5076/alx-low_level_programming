#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets value of a bit to 0 at a given index
 * @n: Pointer to the number to modify.
 * @index: Index of bit to be cleared.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
