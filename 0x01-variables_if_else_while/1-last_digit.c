#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - main block
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	srnad(time(0));
	n = rnad() - RAND_MAX / 2;
	m = n % 10;

	if (m > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, m);
	}
	else if ((m < 6) && (m != 0))
	{
		printf("Last digit of  %i is %i and is less than 6 and not0\n", n, m);
	}
	return (0);
}
