#include <stdio.h>
#include "main.h"

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: pointer to a string of 0 and 1 chars
*
* Return: the converted number, or 0 if there is one or more chars in the
* string b that is not 0 or 1, or if b is NULL
*/

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int u = 0;

	if (!b)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}

	for (a = 0; b[a] != '\0'; a++)
	{
		u <<= 1;
		if (b[a] == '1')
			u += 1;
	}

	return (u);
}
