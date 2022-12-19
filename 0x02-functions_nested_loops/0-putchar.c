#include "main.h"

/**
 * main - Entry point.
 * Description: write a program that prints _putchar followed by a new line.
 * Return: Always 0 (Success.)
 */
int main(void)
{
	int something[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(something[i]);
	}

	_putchar('\n');

	return (0);
}
