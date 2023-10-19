#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * _strlen - calculate the length of a string
 * @str: string
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int i=0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}