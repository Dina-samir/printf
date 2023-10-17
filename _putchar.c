#include "main.h"

/**
 * _putchar - takes a character as input and writes it to the standard output (file descriptor 1) using the write system call
 * @c: The character to be print
 *
 * Return: the number of characters written, which is 1 in this case.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
