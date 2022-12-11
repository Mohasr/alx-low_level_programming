#include <stdio.h>
/**
 * main - function to print numbers between 00 to 99.
 *
 * Return: 0 to success
 */
int main(void)
{
int i, j, k, l, d1, d2;

i = j = k = l = 48;
while (l < 58)
{
	j = 48;
	while (j < 58)
	{
		i = 48;
		while (i < 58)
		{
			d1 = (l * 10) + j;
			d2 = (j * 10) + i;
			if (d1 < d2)
			{
				putchar(l);
				putchar(j);
				putchar(' ');
				putchar(j);
				putchar(i);
				if (l == 57 && j == 56 && j == 57 && i == 57)
					break;
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		j++;
	}
	j++;
}
l++;
}
putchar('\n');
return (0);
}
