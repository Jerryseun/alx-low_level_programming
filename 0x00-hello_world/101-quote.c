#include <unistd.h>
/**
 * main - Print exactly "and that piece of art is useful" - Dora Korpar, 2015-10-19" 
 * followed by a new line, to the standard error
 * 
 * Return: Always 1
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
