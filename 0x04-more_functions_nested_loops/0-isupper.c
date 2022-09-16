#include "main.h"
/**
* _isupper - checks if uppercase
* @c: The character to check
* Return: return 1 if uppercase or 0 if not.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
