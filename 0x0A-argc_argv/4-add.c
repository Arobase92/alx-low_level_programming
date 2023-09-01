#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main -program that adds positive numbers
 *
 * @argc: the number arguments of main
 * @argv: array array containing arguments
 *
 * Return: 0 (all success) 1 (otherwise)
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	if (argc == 1)
		puts("0");
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
