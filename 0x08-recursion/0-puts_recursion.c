<<<<<<< HEAD
#include "holberton.h"

=======
 0x08-recursion/0-puts_recursion.c | 18 ++++++++++--------
#include "main.h"
>>>>>>> c4becfbc7496c28b1c916cfedd085cbc703caf11
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: string
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts_recursion(char *s)
{
<<<<<<< HEAD
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}}
=======
        if (*s != '\0')
        {
                _putchar(*s);
                _puts_recursion(s + 1);
        }
        else
        {
                _putchar('\n');
        }
}
>>>>>>> c4becfbc7496c28b1c916cfedd085cbc703caf11
