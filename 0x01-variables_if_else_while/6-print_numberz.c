#include <stdio.h>
/**
 * main - block
 * Return: 0
 */
int main(void)
{
	char z = 0;

	for (z = 0; z < 10 ; z++)
	{
		putchar(z + '0');
	}
	putchar('\n');
	return (0);
}
