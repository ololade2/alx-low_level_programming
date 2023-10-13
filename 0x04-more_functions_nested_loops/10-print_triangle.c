#include "main.h"
#include <stdio.h>
/**
* print_triangle - prints a triangle, followed by a new line
* @size: size of the triangle
*/
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= size - i)
					putchar(' ');
				else
					putchar('#');
			}
			putchar('\n');
		}
	}
}
