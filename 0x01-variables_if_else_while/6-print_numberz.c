#include <stdio.h>
/**
 * main - Print all single digit numbers of base 10 starting from 0,
 * followed by a new line. Use putchar only twice
 *
 * Return: Always 0 (Successs)
 */
int main(void)
{	int  num;
	for (num =  0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
	return (0);

}
