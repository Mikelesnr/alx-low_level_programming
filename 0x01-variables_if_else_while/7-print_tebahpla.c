#include <stdio.h>

/**
 *main - print alphabet in reverse with putchar
 *Return: 0
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		char--;
	}
	putchar('\n);

	return (0);
}
