#include "main.h"
/**
  * print_alphabet - Print the alaphabet in lowercase, followed by a new line
  */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		_putchar(l);

	_putchar('\n');
}
