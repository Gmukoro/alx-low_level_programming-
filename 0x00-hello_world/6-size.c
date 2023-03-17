#include <stdio.h>
/**
 * main - A C program that prints various sizes of computer
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("Size of a char:%c byte(s)\n", sizeof(char));
	printf("Size of a int:%d byte(s)\n", sizeof(int));
	printf("Size of a long int:%d byte(s)\n", sizeof(long int));
	printf("Size of a long long int:%d byte(s)\n", sizeof(long long int));
	printf("Size of a float:%f byte(s)\n", sizeof(float));
	return (0);

}
