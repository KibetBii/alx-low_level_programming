#include <stdio.h>

/**
  * main - prints all combination of single digits
  * Return: Always 0
  */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	if (n != 57)

	putchar('\n');
	return (0);
}
