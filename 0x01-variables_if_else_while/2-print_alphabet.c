#include <stdio.h>

/**
 * main - main block
 * Return: 0
 */

int main(void)
{
	char j = 'a';
	char b = 'A';

	while (j <= 'Z')
	{
		putchar(j);
		j++;
	}
	while (b <= 'Z')
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
