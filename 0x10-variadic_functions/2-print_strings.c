#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @n: number of strings passed to function
 * @separator: string to be printed between the strings
 * Return: Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	const char *s = separator ? separator : "";
	unsigned int i;
	va_list pr;

	va_start(pr, n);

	for (i = 0; i < n; i++)
	{
		char *value = va_arg(pr, char *);

		if (value == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", value);
		}
		if (i < n - 1)
		{
			printf("%s", s);
		}
	}

	va_end(pr);
	printf("\n");
}
