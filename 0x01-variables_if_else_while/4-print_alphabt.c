#include <stdio.h>
/**
 * main - Print alphabet in lowercase followed by new line;
 * except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{	if (letter != 'q' & letter != 'e')
		putchar(letter);
	}

	putchar(letter'\n');
	return (0);

}
