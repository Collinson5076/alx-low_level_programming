#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
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
	}

	va_end(pr);
	printf("\n");
}
