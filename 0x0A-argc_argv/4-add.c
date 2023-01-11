BrightDaniel
/
alx-low_level_programming
Public
Code
Issues
2
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x0A-argc_argv/4-add.c
@BrightDaniel
BrightDaniel argc tasks
…
 1 contributor
38 lines (34 sloc)  454 Bytes
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

	return (0);
}
