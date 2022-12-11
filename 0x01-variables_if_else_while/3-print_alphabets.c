#include <stdio.h>
#include <stdlib.h>

/**
 * main - printing from a-z & A-Z
 */
int main(void)
{
	char az;
	char AZ;

	for (az = 'a'; az <= 'az'; az++)
	{
		putchar(az);
	}
	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	{
		putchar(AZ);
	}
	putchar('\n');
	return (0);
}

