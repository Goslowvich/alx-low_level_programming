#include <stdio.h>
#include <stdlib.h>
/**
 * main - using putchar to print
 * Return: always 0
 */
int main(void)
{
	char Xl;

	for (Xl = 'a'; Xl <= 'z'; Xl++)
	{
		putchar(Xl);
	}
	putchar('\n');
	return (0);
}
