#include	"main.h"

/**
 * _isalpha - Return 1 if c is a letter. lowercase or uppercase
 * @c: the	char	to	be	checked
 * Return: 1 if its alphabet otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
