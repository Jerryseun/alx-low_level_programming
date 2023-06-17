#include <stdio.h>
/**
 * main - Print lowercase alphabet in reverse, folllowed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');
	return (0);

}
