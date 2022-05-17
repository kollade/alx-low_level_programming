#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int k;
	char *str;

	va_start(strs, n);
	for (k = 0; k < n; k++)
	{
		str = va_arg(strs, char *);

		if (str ==  NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (k < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(strs);
	printf("\n");
}
