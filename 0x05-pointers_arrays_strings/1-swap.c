#include "main.h"

/**
 * swap_int - function to swap two values.
 * @a: first number.
 * @b: second number.
 * Return: no return.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
