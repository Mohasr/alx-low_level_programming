#include "main.h"

/**
 * print_number - function to print an integer.
 * @n: integer input
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int m, i, len;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	i = m;
	len = 1;

	while (i > 9)
	{
		i /= 10;
		len *= 10;
	}

	for (; len >= 1; len /= 10)
	{
		_putchar(((m / len) % 10) + 48);
	}
}
