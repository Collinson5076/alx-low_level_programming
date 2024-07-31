#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - function that prints anything
* @separator: a list of types of arguments passed to the function.
*/

void print_all(const char * const format, ...)
{
	va_list p;
	unsigned int i = 0;
	char *x;
	const char *separator = "";

	va_start(p, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(p, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(p, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(p, double));
				break;
			case 's':
				x = va_arg(p, char*);
				if (x == NULL)
					x = "(nil)";
						printf("%s%s", separator, x);
				break;
			default:
				i++;
				continue;
		} 
		separator = ", ";
		i++;
	}
	va_end(p);
	printf("\n");
}
