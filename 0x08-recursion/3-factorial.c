#include "main.h"

/**
 * factorial - find factorial of n
 * @n: number
 * Return: factorial of number, -1 if negative n
 */

unsigned int factorial(unsigned int n)
{
	if (n == 0 || n == 1)
		return (n);
	else
		return (n * factorial(n - 1));
}
