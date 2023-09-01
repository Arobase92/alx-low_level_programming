#include <stdio.h>

/**
 * main - prints the number of argument
 *
 * @argc: the number arguments of main
 * @argv: array array containing arguments
 *
 * Return: 1 (all success)
 */
int main(int argc, char *argv[])
{
	if (argv[0] != NULL)
		printf("%d\n", argc - 1);
	return (0);
}
