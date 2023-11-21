#unclude "main.h"

/**
 * _puts_recursion _ prints a string, followed by a new line
 * @s : input 
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s);
{

	if (*S)
	{
		_putchar(*S);
		_puts_recursion(s + 1);
        }

	else
		_putchar('\n')
}
