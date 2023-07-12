#include "main.h"

/**
 * _isdigit - Checks for a digit (0-9).
 * @n: The number to be checked.
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(int n)
{
	if (n >= '0' && n <= '9')
		return (1);

	else
		return (0);
}
