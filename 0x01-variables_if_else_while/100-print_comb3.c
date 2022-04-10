#include <stdio.h>

/**
 *main - print 0-9 separated with commas, using putchar
 *Return: 0
 */

int main(void)
{
	int n = 0;
	int a = '0';

	while (n <= 89)
	{
		if (n <= '9')
		{
			putchar('0' + a);
		}
		else
		{
			putchar(a);
		}
		n++;
		a++;
	}
	putchar('\n');

	return (0);
}
