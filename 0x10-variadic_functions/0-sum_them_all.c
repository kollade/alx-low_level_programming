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
	var_list nums;

	if (n == 0)
		return (0);

	var_start(nums, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		x = var_arg(nums, int);
		sum += x;
	}
	var_end(nums);
	return (sum);
}
