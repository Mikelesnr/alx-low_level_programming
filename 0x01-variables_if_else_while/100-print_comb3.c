#include <stdio.h>

/**
 *main - print 0-9 separated with commas, using putchar
 *Return: 0
 */

int main(void)
{
	int n = '0';

	while (n <= "99")
	{
		if (n <= '9')
		{
			putchar('0' + n);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(n);
			if (n != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
		n++;
	}
	putchar('\n');

	return (0);
}
