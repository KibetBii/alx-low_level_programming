#include <stdio.h>
#include "main.h"

/**
  * main - Prints the name of the program
  * @argc: Counts the arguements
  * @argv: Arguements
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	int count = 0;

	if (argc > 0)
	{
		while (count < argc)
		{
			printf("%s\n", argv[count]);
			count++;
		}
	}
	return (0);
}
