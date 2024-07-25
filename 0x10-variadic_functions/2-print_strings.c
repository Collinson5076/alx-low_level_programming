#include <stdio.h>
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
	unsigned int i;
	va_list pr;

	va_start(pr, n);

	for (i = 0; i < n; i++)
	{
		{
			printf("%d", va_arg(pr, int));
		}
	if (separator != NULL && i < n - 1)
	{
		printf("%s", separator);
	}
	else if (separator == NULL && i < n - 1)
	{
		printf("(nil)");
	}
	}

	va_end(pr);
	printf("\n");






}
