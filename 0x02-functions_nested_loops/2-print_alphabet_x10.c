#include "main.h"
/**
  * print_alphabet_x10 -Print 10 times the alphabet, in lowercase, followed by a new line.
  */
void print_alphabet_x10(void)
{
	char l;
	int n = 0;

	while (n < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		n++;
		_putchar('\n');
	}
}
