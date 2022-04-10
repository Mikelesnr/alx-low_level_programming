#include <stdio.h>

/**
 *main - print 0-9 separated with commas, using putchar
 *Return: 0
 */

int main(void)
{
	int ones = '0';
	int tens = '0';

	while (tens <= 8)
	{
		while (ones <= '9')
		{
			putchar(tens);
			putchar(ones);
			if (tens <= 8 && ones <= 9 && (tens + ones != '8' + '9'))
			{
				putchar(',');
				putchar(' ');
			}
			ones++;
		}
		ones = '0';
		tens++;
	}
	putchar('\n');

	return (0);
}
