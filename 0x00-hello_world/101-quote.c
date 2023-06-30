#include <unistd.h>
/**
 * main - Print to the standard error followed by a new line
 *
 * Return: Always 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
