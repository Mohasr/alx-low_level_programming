#include <stdio.h>

/**
 * main - function to print samll and capital letters
 *
 * Return: zero when successful
 */
int main(void)
{
	char alphabet[52] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 52; i++)
	{
		if (alphabet[i] != 'e' && alphabet[i] != 'q')
		{
			putchar(alphabet[i]);
		}
	}
	putchar('\n');
	return (0);
}
