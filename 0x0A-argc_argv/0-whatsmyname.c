#include <stdio.h>
#include "main.h"

/**
  * main - Print the name of the program
  * @argc: counts the arguements
  * @argv: arguements
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}