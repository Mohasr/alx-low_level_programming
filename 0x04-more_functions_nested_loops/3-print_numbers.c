#include "main.h"

/**
 * print_numbers - function to print numbers 0 to 9.
 * Return: no return.
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}

