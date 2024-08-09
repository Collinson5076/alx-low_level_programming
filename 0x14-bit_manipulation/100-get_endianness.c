#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	int i;
	char *a;

	i = 1;
	a = (char *)&i;
	return (*a);
}
