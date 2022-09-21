#include "main.h"

/**
 * _strcat -concatenates the string pointed to by @src to the
 * end of the string pointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concatenated upon
 * main - entry
 *
 * Return: return pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[desr_len++] = src[index];

	return (dest);
}