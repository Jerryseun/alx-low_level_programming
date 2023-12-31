#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: Parameter to be checked
 *
 * Return: 1 if the number is greater than Zero,
 * 0 if the number is zero,
 * -1 if the number is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{	_putchar('+');
		return (1);
	}
	else if (n == 0)
	{	_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
