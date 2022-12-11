#include <stdio.h>
/**
 * main - function to print numbers between 0 to 9 commas and spaces.
 *
 * Return:  0 when success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
	putchar(i);
	if (i != 57)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
