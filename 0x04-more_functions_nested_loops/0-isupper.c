#include <stdio.h>
#include "main.h"

/**
*_isupper - checks if a  character is uppercase or not
*@c: character to be tested
*Return: 1 whether it is, 0 otherwise
*/

int __isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
