#include "main.h"

/**
 * _putchar - takes a pointer to a null-terminated string and iterates through the characters in the string until it encounters the null terminator ('\0')
 * @s: the string to get it's length
 *
 * Return: the length of the string.
 */


int _strlen(char *s){
    int length = 0;
    while (s[length] != '\0') {
        length++;
    }
    return length;
}
