#include <stdlib.h>
#include <time.h>
#include <std.io>
/**
 * main - Prints a text according number
 Return: Always return 0
 */
int main(void)
{
		int n;
		int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
	{
		prinf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else
		(m < 6 && m != 0)
	{
		printf("Last digit %d is %d and is less than 6 and not 0\n", n,
		m);
	}
	return (0);
}
