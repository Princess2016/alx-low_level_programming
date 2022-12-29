#include <stdio.h>
<<<<<<< HEAD
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int: %i byte(s)\n", sizeof(int));
	printf("Size of a long int: %i byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", sizeof(float));
=======

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */

int main(void)
{
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of an int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of a float: %d byte(s)\n", sizeof(float));
>>>>>>> f95877dab1a2f17fc1b87487bb56160030cb98b2
	return (0);
}
