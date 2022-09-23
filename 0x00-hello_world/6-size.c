#include <stcio.h>
/**
 * main - To print the sizeof var types
 *
 * Return: This will be 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int p;
	float q;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte(s)\n", sizeof(p));
	printf("Size of a float: %d byte(s)\n", sizeof(q));

	return (0);
}
