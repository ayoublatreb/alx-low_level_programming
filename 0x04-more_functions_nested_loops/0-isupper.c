#include "main.h"
/**
 * _isalpha - returns 1 if c is a letter
 *
 * @c: character to be checked if alpha
 *
 * Return: 1 if letter, 0 otherwise
 **/
int _isupper(int x)
{
	if ((x <= 90) && (x >= 65))
		return (1);
	else if ((x >= 97) && (x <= 122))
		return (1);
	else
		return (0);
}
