#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
 */

int main(void)
{
	char a, q, e;

	q = 'q';
	e = 'e';
	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a != q && a != e)
			putchar(a);
	}
	putchar('\n');
	return (0);
}

