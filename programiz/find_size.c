#include <stdio.h>

int	main()
{
	char a;
	int b;
	float c;
	double d;

	printf("The size of char is %zu bytes\n", sizeof(a));
	printf("The size of integer is %zu bytes\n", sizeof(b));
	printf("The size of float is %zu bytes\n", sizeof(c));
	printf("The size of doulbe is %zu bytes\n", sizeof(d));

	return 0;
}
