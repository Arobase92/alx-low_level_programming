#include <stdio.h>

/**
 * main - prints all argument
 *
 * @argc: the number arguments of main
 * @argv: array array containing arguments
 *
 * Return: 1 (all success)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
	}
	return (0);
}
