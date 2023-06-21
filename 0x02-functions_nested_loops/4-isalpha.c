#include "main.h"
/**
 * _isalpha - Check if a character is lowercase or uppercase
 * @c: Parameter to be checked
 *
 * Return: 1 if character is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
