#include <stdio.h>

/**
 *main - Print single digit based ten nums with putchar
 *return: 0
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar("%s", num);
		num++;
	}
	
	putchar("\n");

	return (0);
}
