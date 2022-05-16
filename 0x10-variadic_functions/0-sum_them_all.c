#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters to add
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum, x, i;
	variable_list nums;

	if (n == 0)
		return (0);

	variable_start(nums, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		x = variable_arg(nums, int);
		sum += x;
	}
	variable_end(nums);
	return (sum);
}
