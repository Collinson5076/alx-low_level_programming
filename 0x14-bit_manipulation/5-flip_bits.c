#include "main.h"

/**
 * flip_bits - Counts the number of bits to change to get
 * from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to change.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a;
	int count = 0;
	unsigned long int c;
	unsigned long int exclusive = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		c = exclusive >> a;
		if (c & 1)
			count++;
	}

	return (count);
}
