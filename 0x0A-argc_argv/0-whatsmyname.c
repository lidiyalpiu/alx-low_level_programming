#include "main.h"
#include <stdio.h>
/**
 * main - Prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always zero
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
