#include "main.h"
/**
 * print_last_digit - print last digit of number
 * @n: number to beprocessed
 * Return: value fo last digit
 */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
	{
		m = -1 * (n % 10);
		_putchar (m + '0');
		return (m);
	}
	else
	{
		m = (n % 10);
		_putchar (m + '0');
		return (m);
	}
}
