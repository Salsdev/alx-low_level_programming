#include <stdio.h>
/**
 * main - A program that prints different sizes of different computer
 * Return: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %zu byte\n", sizeof(a));
printf("Size of an int: %zu byte\n", sizeof(b));
printf("Size of a long int: %zu byte\n", sizeof(c));
printf("Size of a long long int: %zu byte\n", sizeof(d));
printf("Size of a float: %zu byte\n", sizeof(f));
return (0);
}

