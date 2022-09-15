#include "main.h"

/**
 * _isupper - checks if a letter is uppercase or not
 * @c :  character to be tested
 * return: 1 if it is an uppercase otherwise 0
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'z'))
	{
		return (1);
	}

	return (0);
}
