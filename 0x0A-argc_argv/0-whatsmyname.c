#include <stdio.h>

/**
 * main - prints name program
 *
 * @argc: the number arguments of main
 * @argv: array array containing arguments
 *
 * Return: 1 (all success)
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		puts(argv[0]);
	return (0);
}
